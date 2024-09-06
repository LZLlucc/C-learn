#include <stdio.h>

/* 

练习：从键盘输入圆的半径，输出圆的面积

 */
int main()
{

    printf("请输入圆的半径:\n");

    double radius; //半径

    scanf("%lf",&radius);

    double area = 3.14 * radius * radius; //计算圆的面积

    printf("半径为%lf的圆的面积为：%.2lf\n",radius,area);
    

    return 0;
}