
#include <stdio.h>

/*
布尔类型的使用

方式3：使用c99语法中提供的_Bool类型,只能赋值为0 或 1。 （赋非零非1的值都存储为1）


 */

int main()
{

    _Bool isOk = 1; // 1 : 真
    if (isOk)
    {
        printf("我是美猴王\n");
    }
    else
    {
        printf("我是马喽~~\n");
    }

    isOk = 0;
    printf("isOk = %d\n",isOk); //isOk = 0

    isOk = -4;
    printf("isOk = %d\n",isOk); //isOk = 1

    return 0;
}