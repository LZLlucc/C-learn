#include <stdio.h>

/* 
函数的参数的传递机制：

    测试参数是指针的情况


    练习：针对于day09/chapter11/04-function_transfer1.c 的修改
 */



void swap(int *m,int *n){
    int temp = *m;
    *m = *n;
    *n = temp;
}
//错误方式1：
// void swap(int *p1, int *p2) {
//     int *temp;   //temp指针是野指针
//     *temp = *p1;
//     *p1 = *p2;
//     *p2 = *temp;
// }

//错误方式2：
// void swap(int *p1, int *p2) { //形参是指针变量
//     int *temp;
//     temp = p1;
//     p1 = p2;
//     p2 = temp;
//     //printf("*p1 = %d,*p2 = %d\n", *p1, *p2); //*p1 = 8,*p2 = 6
// }

int main(){

    //需求：交换两个变量的值
    int m = 10,n = 20;
    printf("m = %d,n = %d\n",m,n);

    //交换的代码
    // int temp = m;
    // m = n;
    // n = temp;

    //能实现两个元素的交换
    swap(&m,&n);



    printf("m = %d,n = %d\n",m,n);

    return 0;
}