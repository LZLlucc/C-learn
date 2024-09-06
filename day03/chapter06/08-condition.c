#include <stdio.h>

/*
运算符之六：条件运算符的使用

1、也称为：三元运算符

2、结构：   (条件表达式)? 表达式1:表达式2

3、说明：
凡是可以使用条件运算符的结构都可以改写为if-else结构。反之，不成立
在条件运算符和if-else都能使用的情况下，推荐使用条件运算符。因为效率较高。

 */

int main()
{

    int age = 23;
    age = 10;
    char result = (age >= 18) ? 'A' : 'B';
    printf("result = %c\n", result);

    // 练习1：获取两个整数的较大值
    int num1 = 10;
    int num2 = 20;

    int max = (num1 >= num2) ? num1 : num2;
    printf("%d和%d的较大值是：%d\n", num1, num2, max);

    // 练习2：获取三个数中的最大值
    int m1 = 23, m2 = 45, m3 = 3;
    int max1 = (m1 > m2)? m1 : m2;
    int final_max = (max1 > m3)? max1 : m3;
    printf("%d、%d和%d三者的最大值为：%d\n",m1,m2,m3,final_max);

    //不推荐的写法：可读性太差
    int final_max1 = (((m1 > m2)? m1 : m2) > m3)? ((m1 > m2)? m1 : m2) : m3;
    printf("%d、%d和%d三者的最大值为：%d\n",m1,m2,m3,final_max1);

    return 0;
}