#include <stdio.h>
/* 
复习：函数内变量的传递机制


 */
int main(){

    //1、基本数据类型为例：使用的是值传递
    int a = 10;
    int b = a;

    printf("a = %d\n",a); //a = 10
    b = 20;
    printf("a = %d\n",a); //a = 10


    //2、数组类型为例：地址传递。即将数组首元素的地址传递出去
    char arr[6] = "hello";
    char *ptr_arr = arr;

    for(int i = 0;i < 6;i++){
        printf("%c\t",arr[i]); // h    e    l   l   o   
    } 
    printf("\n");
    //修改
    ptr_arr[1] = 'a';

    for(int i = 0;i < 6;i++){
        printf("%c\t",arr[i]); // h    a    l   l   o   
    }
    printf("\n");


    //3、指针类型为例：地址传递。即将指针保存的地址传递出去
    int num = 10;
    int *p = &num;

    printf("*p = %d\n",*p); //*p = 10;

    int *q = p;
    *q = 100;

    printf("*p = %d\n",*p); //*p = 100

    return 0;
}