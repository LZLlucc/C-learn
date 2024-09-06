#include <stdio.h>


/* 
针对于基本数据类型的值传递的案例：
 */


void swap(int m,int n){
    int temp = m;
    m = n;
    n = temp;
}

int main(){

    //需求：交换两个变量的值
    int m = 10,n = 20;
    printf("m = %d,n = %d\n",m,n);

    //交换的代码
    // int temp = m;
    // m = n;
    // n = temp;

    //不能实现两个元素的交换
    swap(m,n);



    printf("m = %d,n = %d\n",m,n);

    return 0;
}