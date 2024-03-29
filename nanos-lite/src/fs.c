#include <fs.h>

typedef size_t (*ReadFn) (void *buf, size_t offset, size_t len);
typedef size_t (*WriteFn) (const void *buf, size_t offset, size_t len);

typedef struct {
  char *name;
  size_t size;
  size_t disk_offset;
  ReadFn read;
  WriteFn write;
  size_t do_offset;
} Finfo;




size_t ramdisk_read(void *buf, size_t offset, size_t len);
size_t ramdisk_write(const void *buf, size_t offset, size_t len);
size_t serial_write(const void *buf, size_t offset, size_t len);
size_t events_read(void *buf, size_t offset, size_t len) ;
size_t dispinfo_read(void *buf, size_t offset, size_t len) ;
size_t fb_write(const void *buf, size_t offset, size_t len) ;
enum {FD_STDIN, FD_STDOUT, FD_STDERR, FD_FB,FD_EVENT,FD_DISPINFO};

size_t invalid_read(void *buf, size_t offset, size_t len) {
  panic("should not reach here");
  return 0;
}

size_t invalid_write(const void *buf, size_t offset, size_t len) {
  panic("should not reach here");
  return 0;
}


/* This is the information about all files in disk. */
static Finfo file_table[] __attribute__((used)) = {
  [FD_STDIN]  = {"stdin", 0, 0, invalid_read, invalid_write},
  [FD_STDOUT] = {"stdout", 0, 0, invalid_read, serial_write},
  [FD_STDERR] = {"stderr", 0, 0, invalid_read, serial_write},
  [FD_FB]  = {"/dev/fb",0,0,invalid_read,fb_write},
  [FD_EVENT]  = {"/dev/events",0,0,events_read,invalid_write},
  [FD_DISPINFO] = {"/proc/dispinfo",0,0,dispinfo_read,invalid_write},

#include "files.h"
};

int file_num = sizeof(file_table) / sizeof(Finfo);
size_t fs_open(const char *pathname, int flags, int mode) {
  // 目前文件系统还比较简单
  int i = 0;
  // printf("file num is %d\n",file_num);
  // printf("path name is %s\n",pathname);
  int length = strlen(pathname);
  for(; i < file_num ; i++) {
    int file_length = strlen(file_table[i].name);
    int sum_length = file_length >= length ? file_length:length;
    if(memcmp(pathname,file_table[i].name,sum_length) == 0 ) {
      // printf("fd is %d\n",i);
      file_table[i].do_offset = 0;
      return i;
    }
  }
  return -1;
}
size_t fs_write(int fd,const void * buf,size_t len) {
  if(file_table[fd].write == NULL) {
    if(file_table[fd].do_offset + len <= file_table[fd].size) {
      size_t has_write_len = ramdisk_write(buf,file_table[fd].disk_offset + file_table[fd].do_offset,len);
      file_table[fd].do_offset += has_write_len;
      return has_write_len;
    }else{
      return -1;
    }
  }else {
    return file_table[fd].write( buf,file_table[fd].do_offset,len);
  }
}

size_t fs_read(int fd,const void * buf,size_t len) {
  if(file_table[fd].read == NULL) {
      // if(len == 0x2e1c0) {
        // printf("do offset is %x\n",file_table[fd].do_offset);
      // }
      size_t read_number = (len + file_table[fd].do_offset) >= file_table[fd].size ? (file_table[fd].size  - file_table[fd].do_offset ) : len;
      size_t has_read_len = ramdisk_read ((void*)buf,file_table[fd].disk_offset + file_table[fd].do_offset,read_number);
      file_table[fd].do_offset += has_read_len;
      return has_read_len;
  }else {
    return file_table[fd].read((void*)buf,0,len);
  }
  
}
size_t  fs_lseek(int fd,size_t offset,int whence) {
  if( fd >= 3 && fd < file_num) {
      if(offset >= file_table[fd].size) {
        return -1;
      }else {
        switch(whence) {
          case SEEK_SET : if(file_table[fd].size >= offset && offset >= 0) {
            file_table[fd].do_offset = offset;
          }else {
            return -1;
          }
          break;
          case SEEK_CUR : if((file_table[fd].do_offset + offset) <= file_table[fd].size && file_table[fd].do_offset + offset >= 0) {
            file_table[fd].do_offset = offset + file_table[fd].do_offset;
          }else {
            return -1;
          }break;
          case SEEK_END : if((file_table[fd].size    + offset) >= 0 && offset <= 0) {
            file_table[fd].do_offset = offset + file_table[fd].size  ;
          }else {
            return -1;
          }break;
          default : printf("guabile \n");
          panic("not ok\n");
          break;
        }
        return file_table[fd].do_offset;
        // file_table[fd].do_offset = offset;
        // return offset;
      }
  }else {
    return -1;
  }
  return -1;
}
size_t fs_close(int fd){
  // if( fd >= 3 && fd < fife_num) {
      file_table[fd].do_offset = 0;
  // }else {
  //   return -1;
  // }
  return 0;
}
extern int width ;
extern int height;
void init_fs() {
  file_table[FD_FB].size = width * height * 4;
  // TODO: initialize the size of /dev/fb
}

char* get_file_name(int fd) {
  return file_table[fd].name;
}