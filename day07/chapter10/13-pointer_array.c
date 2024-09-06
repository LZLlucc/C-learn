#include <stdio.h>

/* 

&数组名  vs  数组名

 */
int main()
{
    int arr[5] = {10,20,30,40,50};

    int *p = arr;   //arr 理解为数组首元素arr[0]的地址
    //&arr;         //&arr 理解为数组arr的地址
    

    printf("p的值为%p\n",p);  //000000c6615ffa20
    printf("&arr的值为%p\n",&arr);  //000000c6615ffa20

    printf("arr + 1的值为：%p\n",p + 1);  //0000004c595ff9a4
    printf("&arr + 1的值为：%p\n",&arr + 1);  //0000004c595ff9b4

    return 0;
}