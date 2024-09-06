#include <stdio.h>
/* 

运算规则1：自动类型转换（隐式转换）

1.2 宽类型赋值给窄类型

说明： 1、可能存在精度损失
       2、实际开发中，尽量不要使用


 */
int main()
{

    double d1 = 12.67;
    int i1 = d1;  //宽类型赋值给窄类型
    //存在精度损失
    printf("i1 = %d\n",i1); //12

    int i2 = 12;
    short s1 = i2;
    printf("s1 = %hd\n",s1); //12

    float f1 = 12.3456;  //宽类型转换为窄类型

    long long ll1 = 123;  //窄类型int自动转换为宽类型long long。不存在精度损失问题

    return 0;
}