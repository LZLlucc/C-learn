#include <stdio.h>

/* 

练习：从键盘输入圆的半径，输出圆的面积

 */

//使用宏定义声明3.14
//PI:宏名    3.14 宏体     在预处理环节，使用3.14替换PI，称为宏替换
#define PI 3.14

int main()
{

    printf("请输入圆的半径:\n");

    //PI = 3.1415; //不能修改其值

    double radius; //半径

    scanf("%lf",&radius);

    double area = PI * radius * radius; //计算圆的面积

    printf("半径为%lf的圆的面积为：%.2lf\n",radius,area);
    

    return 0;
}