#include <stdio.h>

/* 

练习：从键盘输入圆的半径，输出圆的面积

 */

//使用const修饰一个变量，则此变量即为常量。一旦赋值，不可修改其值。


/* 
使用#define 和 const两种方式定义常量的对比：

1、类型检查
#define : 其实就是进行的文本替换，不存在类型检查，可能存在安全问题
const:    声明的常量存在类型，执行过程中会进行类型的检查，不存在安全问题

2、加载时机
#define : 在预处理阶段，将声明的宏体替换宏名
const : 在编译阶段，产生作用

 */


//使用const修饰：常量
const double PI = 3.14;

int main()
{

    //使用const修饰：常量
    //const double PI = 3.14;

    //PI = 3.1415;  //不能修改其值

    printf("请输入圆的半径:\n");

    double radius; //半径

    scanf("%lf",&radius);

    double area = PI * radius * radius; //计算圆的面积

    printf("半径为%lf的圆的面积为：%.2lf\n",radius,area);
    

    return 0;
}