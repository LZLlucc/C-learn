#include <stdio.h>

/*
goto关键字的使用

1、 goto 标签名  ： 直接调转到标签名对应的代码处开始执行

 */
int main()
{
    //举例1：
    printf("start....\n");
    goto label1;
    printf("代码1....\n");
    printf("代码2....\n");
label1:
    printf("代码3....\n");
    printf("代码4....\n");


    //举例2：构成了死循环，要避免的！
    // loop_label:printf("Hello, world!\n");
    // goto loop_label;

    //举例3：使用goto语句实现循环输出数字1 ~ 5
    int num = 1;
label2:
    printf("num = %d\n",num);
    num++;
    if(num <= 5)
        goto label2;


    return 0;
}