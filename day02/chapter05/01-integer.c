
#include <stdio.h>

/* 

C语言中整型的使用

1、整型类型： short \ int \ long  \ long long 
2、整型类型可以使用signed 和 unsigned修饰，表示有符号(+/-)和无符号的数据。

 */
int main()
{   

    //① 测试短整型：short、signed short 、 unsigned short :都占用2个字节
    short s1 = 12;  //默认是有符号的类型，省略了signed
    signed short s2 = -123;
    unsigned short s3 = 124u;  //无符号的类型建议后缀都添加上u或U
    //s3 = -124u; //报错

    //输出数据
    //%hd:有符号的short类型
    //%hu:无符号的short类型
    printf("s1 = %hd,s2 = %hd,s3 = %hu",s1,s2,s3);

    //测试占用的字节数:sizeof()，返回字节数的个数
    
    printf("short 类型占用的字节数是：%zu bytes\n",sizeof(short));
    printf("signed short 类型占用的字节数是：%zu bytes\n",sizeof(signed short));
    printf("unsigned short 类型占用的字节数是：%zu bytes\n",sizeof(unsigned short));

    printf("\n");

    //② 测试整型：int 、 signed int 、unsigned int。在本机系统上测试，占用4个字节
    int i1 = 10;
    signed int i2 = -123;
    unsigned int i3 = 134u;

    //使用的占位符
    // %d:有符号的int类型
    // %u:无符号的int类型
    printf("i1 = %d,i2 = %d,i3 = %u\n",i1,i2,i3);

    //测试占用字节数的大小
    printf("int类型占用的字节数为：%zu bytes\n",sizeof(int));
    printf("signed int类型占用的字节数为：%zu bytes\n",sizeof(signed int));
    printf("unsigned int类型占用的字节数为：%zu bytes\n",sizeof(unsigned int));

    printf("\n");

    //③ 测试长整型：long 、 signed long 、 unsigned long。在本机系统上测试，占用4个字节
    // 长整型的后缀是l或L
    long l1 = 123l;
    unsigned long l2 = 124LU;

    //使用的占位符
    // %ld:有符号的long类型
    // %lu:无符号的long类型

    printf("l1 = %ld,l2 = %lu\n",l1,l2);

    //测试占用字节数的大小
    printf("long类型占用的字节数为：%zu bytes\n",sizeof(long));
    printf("signed long类型占用的字节数为：%zu bytes\n",sizeof(signed long));
    printf("unsigned long类型占用的字节数为：%zu bytes\n",sizeof(unsigned long));

    printf("\n");

    //④ 测试长长整型：long long 、signed long long 、unsigned long long。在本机系统上测试，占用8个字节
    // 长长整型的后缀为：ll 或 LL
    long long ll1 = 123LL;
    unsigned long long ll2 = 125llu;

    //占位符：
    // %lld:有符号的long long 类型
    // %llu:无符号的long long 类型
    printf("ll1 = %lld,ll2 = %llu\n",ll1,ll2);

    //占用字节数的大小
    printf("long long类型占用的字节数为：%zu bytes\n",sizeof(long long));
    printf("signed long long类型占用的字节数为：%zu bytes\n",sizeof(signed long long));
    printf("unsigned long long类型占用的字节数为：%zu bytes\n",sizeof(unsigned long long));

    //此外的内容：
    //1、开发中，我们声明整型数据时，默认声明int类型。如果遇到更大的整数，可以考虑声明为long long
    //2、整型常量，默认类型为int。
    int m = 10;
    m = m + 5; //5
    printf("5占用的字节数为：%zu bytes\n",sizeof(5)); //4 bytes

    //标识符不能数字开头。
    //long 100L = 1000L;
    //printf("%ld\n",100L);


    return 0;
}