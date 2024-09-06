
#include <stdio.h>

/* scanf()的练习 */
int main()
{
    //练习1：从键盘输入两个整数，并计算两个整数的和

    // printf("请输入两个整数：\n");
    // 从键盘获取两个整数
    // int num1,num2;

    // scanf("%d %d",&num1,&num2);

    // //计算两个整数的和，并输出
    // int sum = num1 + num2;
    // printf("两个整数%d和%d的和为：%d",num1,num2,sum);


    //练习2：从键盘输入圆的半径，并计算圆的面积
    printf("请输入圆的半径：");

    //从键盘获取半径值
    double radius;

    scanf("%lf",&radius);

    //计算圆的面积
    double area = 3.14 * radius * radius;
    printf("半径为%lf的圆的面积为：%lf \n",radius,area);
    printf("半径为%.2lf的圆的面积为：%.2lf \n",radius,area);


    return 0;
}
