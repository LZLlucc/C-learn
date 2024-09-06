#include <stdio.h>
/* 
二维数组与数组指针的使用
 */
int main()
{   

    int arr[] = {1,2,3,4,5};
    int *ptr = arr;  //arr首元素的地址赋给ptr  ptr的类型int *


    int a[3][5] = {
        {11, 12, 13, 14, 15},
        {21, 22, 23, 24, 25},
        {31, 32, 33, 34, 35}};

    int (*ptr1)[5] = a;  //a表示a[0]的地址 int []类型，故指针的类型为： int (*)[]

    return 0;
}