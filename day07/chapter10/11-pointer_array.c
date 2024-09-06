#include <stdio.h>

/* 
对比指向数组首元素的指针  vs  数组名

 */
int main()
{

    int arr[5] = {10,20,30,40,50};
    int *ptr = arr;

    //1、数组名是一个常量，不可以被重新赋值。
    //arr = {1,2,3,4,5};
    //指针变量保存的数据是可以修改的。
    int num = 10;
    ptr = &num;

    //2、运算时，可以ptr++，而数组名的操作arr++ 或 arr-- 是不被允许的
    // ptr = arr;
    // for(;arr < ptr + 5;arr++){
    //     printf("%d\n",*arr);
    // }

    //3、sizeof的使用
    // sizeof 数组名 ： 返回整个数组占用的字节数的大小
    // sizeof 指针   :  返回指针变量占用的字节数的大小
    printf("arr占用的字节数是：%zu\n",sizeof arr); //20
    printf("ptr占用的字节数是：%zu\n",sizeof ptr); //8


    return 0;
}