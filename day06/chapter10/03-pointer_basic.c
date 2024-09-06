#include <stdio.h>

/* 
取值运算符的使用： *

1、说明：*后面只能修饰指针表达式。

 */
int main(){

    int num = 10;
    int *ptr1 = &num;

    //取出指向的内存地址对应数据的值
    int value1 = *ptr1;  //*就是取址运算符，与12行int *的*完全是不同的概念

    printf("value1 = %d\n",value1);


    //修改指向的内存地址对应数据的值
    *ptr1 = 100;
    printf("num = %d\n",num); //100

    int *ptr2 = ptr1;
    *ptr2 += 10;
    printf("num = %d\n",num); //110

    return 0;
}