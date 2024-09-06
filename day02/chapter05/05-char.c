#include <stdio.h>

/* 
测试字符类型的使用

1、char类型，表示一个字符。

2、char类型的声明方式：见如下的三种方式

3、char类型可以使用signed 和 unsigned 进行修饰。
 */

int main()
{

    //声明方式1(最常见)：使用一对''表示，内部存储一个字符。此字符可以是数字、字母、符号。
    //不能是汉字
    //char类型的变量，在内存中分配1个字节。
    char c1 = 'a';
    char c2 = '1';
    char c3 = '+';

    //char类型的占位符是：%c
    printf("c1 = %c,c2 = %c,c3 = %c\n",c1,c2,c3);

    //char c4 = '中';
    //char c5 = 'ち';
    //printf("c4 = %c\n",c4); //运行出现乱码
    //printf("c5 = %c\n",c5); //运行出现乱码

    //char c6 = '';  //报错
    //char c7 = 'ab'; //报错


    //声明方式2：声明转义字符
    char c8 = '\t';  //制表符
    c8 = '\n'; //换行符
    printf("hello%cworld\n",c8);

    printf("你长得好\"帅\"啊~~~");

    //声明方式3：使用字符对应的ascii码值
    char cc1 = 'A';
    printf("cc1 = %c\n",cc1); // cc1 = A
    printf("cc1 = %d\n",cc1); // cc1 = 65

    char cc2 = 65;
    printf("cc2 = %c\n",cc2); // cc2 = A
    printf("cc2 = %d\n",cc2); // cc2 = 65

    //问题1：'A' 和 65 的不同的赋值方式，在底层对应的数据值相等吗？相等
    //问题2：'1' 和 1 的不同的赋值方式，在底层对应的数据值相等吗？不相等

    //

    return 0;
}