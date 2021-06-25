#include <pthread.h>     // 引用 pthread 函式庫
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h> 

void *print_george(void *argu) {    // 每隔一秒鐘印出一次 george 
  while (1) {    
    printf("George\n");    
    sleep(1);    
  }    
  return NULL;    
}    

void *print_mary(void *argu) {     // 每隔2秒鐘印出一次 mary 
  while (1) {    
    printf("Mary\n");    
    sleep(2);    
  }    
  return NULL;    
}    

int main() {     // 主程式
  pthread_t thread1, thread2;     // 宣告兩個執行
  pthread_create(&thread1, NULL, &print_george, NULL);    //  print_george
  pthread_create(&thread2, NULL, &print_mary, NULL);    //  print_mary
  while (1) {     
    printf("----------------\n");   
    sleep(1);     
  }    
  return 0;    
}