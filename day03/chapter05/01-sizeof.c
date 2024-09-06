
#include <stdio.h>
/*

sizeof()函数的使用：

1、作用：使用此函数计算具体的某个数据类型、某个变量、某个常量在内存中占据的字节数的大小
2、返回值类型：size_t
   输出时的占位符： %zu   %zd 



 */
int main()
{
    // 测试类型1：某个具体的数据类型
    printf("char：%zu \n", sizeof(char));      // char：1
    printf("short：%zu \n", sizeof(short));   // short：2
    printf("int：%zu \n", sizeof(int));        // int：4
    printf("long：%zu \n", sizeof(long));      // long：4
    printf("long long：%zu \n", sizeof(long long));  // long long：8
    printf("float：%zu \n", sizeof(float));   // float：4
    printf("double：%zu \n", sizeof(double));   // double：8
    printf("long double：%zu \n", sizeof(long double));   // long double：16

    //测试类型2：某个具体的变量
    int num = 10;
    printf("num 占用的字节数为：%zu bytes\n",sizeof(num));
    short s = 10;
    printf("占用的字节数为：%zu bytes\n",sizeof s);  //可以省略一对小括号
    printf("占用的字节数为：%zu bytes\n",sizeof(s + 10));

    //测试类型3：某个具体的常量
    printf("12.3占用的字节数：%zu bytes\n",sizeof(12.3));  //8
    printf("12.3l占用的字节数：%zu bytes\n",sizeof(12.3l));  //16
    printf("12ll占用的字节数：%zu bytes\n",sizeof 12ll);  // 8   可以省略一对小括号

    return 0;
}