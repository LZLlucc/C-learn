#include <stdio.h>

/* 
测试scanf()函数的使用

1、scanf()，与printf()函数一样，声明在stdio.h头文件中。

 */

int main()
{
    //举例1：从键盘输入一个整型的数据，并输出
    int num;

    printf("请输入一个整数：");

    /* 
    &num : 表示获取num变量在内存中的地址
    scanf函数的参数2（即数据列表），需要指明各个变量的地址
    scanf函数的参数1中有几个格式占位符，后续的数据列表中就应该有对应多个变量。
     */
    scanf("%d",&num);

    printf("num = %d\n",num);

    //举例2.1：从键盘输入三个整型的数据，并输出
    // int a,b,c;
    // printf("请输入三个整数：\n");
    // scanf("%d %d %d",&a,&b,&c);  //说明：scanf参数1使用空格分隔不同的占位符。则输入时也需要以空格分隔不同的数据
    // printf("a = %d,b = %d,c = %d\n",a,b,c);

    //举例2.2：从键盘输入三个整型的数据，并输出
    int a,b,c;
    printf("请输入三个整数：\n");
    scanf("%d,%d,%d",&a,&b,&c);  //说明：scanf参数1使用,分隔不同的占位符。则输入时也需要以,分隔不同的数据
    printf("a = %d,b = %d,c = %d\n",a,b,c);


    return 0;
}