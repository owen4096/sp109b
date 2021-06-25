#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#define SMAX 128

int main() {
  int a = open("a.txt", O_RDWR);
  int b = open("b.txt", O_CREAT|O_RDWR, 0644);//4可以讀不可以寫不可執行
  char text[SMAX];//字元陣列
  int n = read(a, text, SMAX);//最多128字
  printf("n=%d\n", n);
  write(b, text, n);
  printf("a=%d, b=%d\n", a, b);
}