#include <stdio.h>
/* 
函数的参数的传递机制：

    测试参数是指针的情况


    练习：针对于day09/chapter11/03-function_transfer.c 的修改
 */


void increment(int *i){
    (*i)++;
    printf("increment:*i = %d\n",*i);
}



int main(){

    int i = 10;
    printf("main:i = %d\n",i);  //10

    increment(&i);

    increment(&i);

    printf("main:i = %d\n",i); //12


    return 0;
}