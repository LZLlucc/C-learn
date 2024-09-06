#include <stdio.h>
/* 
函数参数的传递机制


1、复习：形参 vs 实参

形参：函数声明时，一对()内的变量
实参：函数调用时，实际赋值给形参的数据：变量、常量等

2、我们这节要说明的问题：实参给形参赋值以后，形参在函数内部，对此形参进行操作，会不会影响实参的值？

3、结论：

值传递机制：将实参的数据值复制给形参，函数内对形参的操作不会影响实参的值。 --->单向传递
        适用于：基本数据类型（char \ short \ int \ long \ long long \ float \ double \ long double)
               结构体、共同体、枚举

地址传递机制：将实参的地址复制给形参，导致形参和实参的地址值相同（意味着指向了相同的数据），导致
            通过形参在函数内修改数据的话，会导致实参数据的修改。 ---> 双向传递
        适用于：指针结构、数组

 */

void increment(int i){
    i++;
    printf("increment:i = %d\n",i);
}



int main(){

    int i = 10;
    printf("main:i = %d\n",i);  //10

    increment(i);

    increment(i);

    printf("main:i = %d\n",i); //10


    return 0;
}