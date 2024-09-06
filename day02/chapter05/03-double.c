#include <stdio.h>

/* 
测试浮点类型的使用

1、 浮点类型的种类： float(单精度浮点型) 、double（双精度浮点型）、 long double(长双精度浮点型)
2、 浮点型不要使用signed \ unsigned修饰。

 */

int main()
{

    //① float:
    //声明的float类型后缀为f或F，在本系统中占用4个字节
    float f1 = 12.3f,f2 = .126F,f3 = 123;
    //占位符：%f
    printf("f1 = %f,f2 = %.2f,f3 = %f\n",f1,f2,f3);

    //占用的字节数
    printf("float类型占用的字节数为：%zu bytes\n",sizeof(float));

    //*********************************************************

    //② double，在本系统中占用8个字节
    //
    double d1 = 12.3,d2 = .127,d3 = 123;
    //占位符：使用 %lf表示
    printf("d1 = %lf,d2 = %.2lf,d3 = %lf\n",d1,d2,d3);

    //占用的字节数
    printf("double类型占用的字节数为：%zu bytes\n",sizeof(double));

    //*********************************************************

    //③ long double，在本系统中占用16个字节
    // 声明的float类型后缀为l或L
    long double ld1 = 12.3l,ld2 = .127L,ld3 = 123;

    //占位符：%Lf
    printf("d1 = %Lf,d2 = %Lf,d3 = %.2Lf\n",ld1,ld2,ld3);

    //占用的字节数
    printf("long double 占用的字节数位：%zu bytes\n",sizeof(long double));


    //后续的内容：
    //1、开发中，涉及到浮点类型变量时，常常使用double类型
    //2、程序中出现的浮点型常量，默认为double类型
    double d4 = 12.3;
    d4 = d4 + 0.1;  //0.1就是double类型

    printf("0.1 占用的字节数为：%zu bytes\n",sizeof(0.1)); //8个字节

    return 0;
}