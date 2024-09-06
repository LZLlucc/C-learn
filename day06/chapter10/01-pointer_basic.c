#include <stdio.h>

/*
指针的基本使用

 */
int main()
{

    //1、指针变量的声明
    int *p1; // 声明指针变量p1，让其指向int类型的数据。 此时p1的类型： int *

    int* p2; //此种方式声明指针变量，更容易理解。
    int * p3;

    char *cptr1; //指向char类型数据的一个指针

    float *fptr1; //指向float类型数据的一个指针


    //2、取址运算符：&
    int num1 = 10;
    printf("%p\n",&num1); //000000a74f1ff7b4

    int * ptr1;
    ptr1 = &num1;  //将num1在内存中的首地址赋给ptr1指针变量。此时ptr1存储的就是num1的地址
    printf("%p\n",ptr1); //000000a74f1ff7b4


    char c = 'A';
    printf("c的地址：%p\n",&c); //0000006f1a9ff79b

    char *c_ptr1 = &c;
    printf("c_ptr1的值：%p\n",c_ptr1); //0000006f1a9ff79b

    //如下操作是错误的：
    //int *ptr2 = c_ptr1;   //char --> int:存在自动类型提升。 char * 与 int *是并列的两个类型

    //如下的操作是可以的。 同类型的指针变量可以相互赋值。
    int *ptr3 = ptr1;
    printf("%p\n",ptr3); //000000a74f1ff7b4

    //错误的：指针变量中只能存放地址，不要将一个整数赋给指针变量
    //int *ptr4 = num1;
    //int *ptr5 = 100;



    return 0;
}