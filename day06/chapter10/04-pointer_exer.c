#include <stdio.h>

/*
练习1：定义double型变量num，定义两个指针变量p1、p2分别存储num的地址，
通过p1、p2修改num的值。
 */
int main()
{

    double num = 10.2;

    double *p1, *p2;

    p2 = p1 = &num;


    printf("num = %.1lf\n",num); //10.2

    *p1 = 12.3;
    printf("num = %.1lf\n",num); //12.3

    *p2 += 4;
    printf("num = %.1lf\n",num); //16.3


    return 0;
}