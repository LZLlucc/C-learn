#include <stdio.h>

/* 

定义常量的方式1：使用 #define 宏定义的方式

 */

#define INFO "helloworld"

#define LEN 10

int main()
{

    printf(INFO);

    printf("%d\n",LEN);

    return 0;
}