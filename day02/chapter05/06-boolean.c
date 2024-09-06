
#include <stdio.h>

/*
布尔类型的使用说明：

1、布尔（boolean）值用于表示真、假两种状态，通常用于逻辑运算和条件判断。
2、开发中可以使用非0的数值表示真，0值表示假。

 */

#define BOOL int
#define TRUE 1
#define FALSE 0

int main()
{
    //方式1：使用宏定义之前的方式
    int isOk = 1;

    isOk = -4;

    isOk = 0;

    if (isOk)
    {
        printf("我是美猴王\n");
    }
    else
    {
        printf("我是马喽~~\n");
    }

    //方式2：使用宏定义的方式
    BOOL isHandsome = TRUE;

    isHandsome = FALSE;
    if (isHandsome)
    {
        printf("我好帅~~~\n");
    }
    else
    {
        printf("我好水~~~\n");
    }

    return 0;
}