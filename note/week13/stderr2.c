#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>

int main() {
  int fdb = open("log.txt", O_CREAT|O_RDWR, 0644);  // 打開檔案 log.txt 並取得代號 fdb
  dup2(fdb, 2); // 複製 fdb 檔案描述子到 2 (stderr) 藉由dup2 把檔案複製到檔案裡
  fprintf(stderr, "Warning: xxx\n");
  fprintf(stderr, "Error: yyy\n");
}