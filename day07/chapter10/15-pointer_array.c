#include <stdio.h>
/* 
指针数组的使用：

指针数组的格式： 数据类型 *指针数组名[数组的长度]

 */

int main(){
    //练习：指针数组元素是基本数据类型变量
    int num1 = 10;
    int num2 = 20;
    int num3 = 30;

    int *ptr_num[3];  //指针数组

    ptr_num[0] = &num1;
    ptr_num[1] = &num2;
    ptr_num[2] = &num3;

    for(int i = 0;i < 3;i++){
        printf("ptr_num[%d]的值为%p,指向的数据值为%d\n",i,ptr_num[i],*ptr_num[i]);
    }

    //练习：指针数组元素是一维数组
    int arr1[5] = {1,2,3,4,5};
    int arr2[4] = {10,20,30,40};
    int arr3[3] = {100,200,300};

    int *ptr_arr[3];
    ptr_arr[0] = arr1;
    ptr_arr[1] = arr2;
    ptr_arr[2] = arr3;

    return 0;
}