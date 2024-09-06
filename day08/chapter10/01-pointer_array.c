#include <stdio.h>

int main(){
    //复习：二维数组的定义方式中发现，每个二维数组都是一个矩形、矩阵结构。即每行中元素的个数都相同。
    int arr[3][4];
    arr[0][1] = 10;

    int arr0[][4] = {{1,2,3,4},{3,4,54,6},{4,5,56,7}};

    //如果实际问题中，定义的多个一维数组，长度不同如何保存呢？可以使用指针数组

    int arr1[5] = {1,2,3,4,5};
    int arr2[4] = {10,20,30,40};
    int arr3[3] = {100,200,300};

    int *ptr_arr[3];  //指针数组
    ptr_arr[0] = arr1;
    ptr_arr[1] = arr2;
    ptr_arr[2] = arr3;

    //定义一个数组，用于存储arr1、arr2、arr3三个数组的长度
    int arr_len[3] = {5,4,3};

    for(int i = 0;i < 3;i++){  //3:指针数组的长度
        for(int j = 0;j < arr_len[i];j++){
            printf("%d\t",*(ptr_arr[i] + j));
        }
        printf("\n");
    }


    return 0;
}