#include <stdio.h>

/* 
函数指针的使用注意点：

局限性：对指向函数的指针变量不能进行算术运算，如p+n，p++，p--等运算是无意义的。

优点：用函数名调用函数，只能调用所指定的一个函数，而通过指针变量调用函数比较灵活，
     可以根据不同情况先后调用不同的函数。
 */

int sum(int m,int n){
    return m + n;
}

int max(int m,int n){
    return (m > n)? m : n;
}

int main(){

    //声明一个函数指针：
    int (*ptr_num)(int,int);

    ptr_num = sum;
    int result = ptr_num(10,20);
    printf("result = %d\n",result);


    ptr_num = max;
    result = ptr_num(10,20);
    printf("result = %d\n",result);


    return 0;
}