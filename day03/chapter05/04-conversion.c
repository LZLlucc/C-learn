#include <stdio.h>

/* 
运算规则2：强制类型转换（显式转换）


说明：1、使用强转符()，显式的指明将某一个类型转换为另一个类型
    2、仍然存在精度损失
 */

int main()
{

    double d1 = 12.3;
    int i1 = (int)d1;  //存在精度损失

    float f1 = (float)12.3456;


    int i2 = 127;
    char c1 = (char)i2; // 不存在精度损失
    printf("c1 = %d\n",c1); //127

    int i3 = 128;
    char c2 = (char)i3;
    printf("c2 = %d\n",c2); // -128


    long l1 = (long)i1;  //可以省略强转符的操作


    long long ll1 = (long long)i3; // 可以省略强转符




    //向上溢出
    char x = 127;
    x = (char)(x + 1);
    printf("%d\n", x); // -128

    //向下溢出
    x = (char)(x - 1);
    printf("%d\n", x); // 127

    return 0;
}