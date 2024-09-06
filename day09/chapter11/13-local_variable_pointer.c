#include <stdio.h>
#include <stdlib.h>
/* 
返回局部变量指针的问题

 */

//错误情况：
// int * func1(){
//     int n = 10;  //n:存储在栈空间中，随着函数的执行结束，就销毁了。
//     return &n;
// }

//正确写法1：
int * func2(){
    static int n = 10;  //n：静态的局部变量，存储在静态数据区。
    return &n;
}

//正确写法2：
int * func3(){
    int *p = (int *)malloc(sizeof(int));
    *p = 10;
    return p;
}


int main(){

    int *p = func2();
    printf("*p的值为：%d\n",*p);

    *p = 100;
    printf("*p的值为：%d\n",*p);

    int *q = func3();
    printf("*q的值为：%d\n",*q);

    *q = 100;
    printf("*q的值为：%d\n",*q);

    //主动释放分配的空间
    free(q);  //如果没有声明此行代码，会出现内存泄漏  （vs 内存溢出）
              //内存中，我们不再使用的数据，就是垃圾。如果此垃圾没有被回收，就是泄漏。
              //如果内存泄漏过多，就会出现内存溢出。

    return 0;
}