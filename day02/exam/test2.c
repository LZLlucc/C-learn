#include <stdio.h>

/*
编写一个程序，要求从键盘输入两个整数，并输出两个整数的乘积

 */

int main()
{

    int num1,num2;

    printf("请输入两个整数：\n");
    scanf("%d,%d",&num1,&num2);

    int result = num1 * num2;

    printf("result = %d\n",result);

    return 0;
}