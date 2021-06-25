#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    printf("location of code : %p\n", main);//存放在記憶體的位置
    printf("location of heap : %p\n", malloc(100e6));//分配記憶體的位置
    int x = 3;
    printf("location of stack: %p\n", &x);//堆疊的最上層目前的位置
    return 0;
}