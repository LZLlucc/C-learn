#include <stdio.h>

/* 
二维数组的使用：数组的内存分析

 */
int main()
{
    int arr1[3][4] = {
        {1, 2, 3, 4}, 
        {5, 6, 7, 8}, 
        {9, 10, 11, 12}};

    int arr1_row = sizeof arr1 / sizeof arr1[0]; //行数
    int arr1_column = sizeof arr1[0] / sizeof arr1[0][0]; //列数

    for(int i = 0;i < arr1_row;i++){
        for(int j = 0;j < arr1_column;j++){
            printf("arr1[%d][%d]地址：%p  ",i,j,&arr1[i][j]);
        }
        printf("\n");
    }

    printf("arr1[0]的地址为：%p\n",arr1[0]);  //arr1[0]的存储是arr1[0][0]的地址
    printf("arr1[1]的地址为：%p\n",arr1[1]);  //arr1[1]的存储是arr1[1][0]的地址
    printf("arr1[2]的地址为：%p\n",arr1[2]);  ////arr1[2]的存储是arr1[2][0]的地址

    printf("\n");

    printf("arr1[0]+1的地址为：%p\n",arr1[0] + 1); 
    printf("arr1[1]+1的地址为：%p\n",arr1[1] + 1); 
    printf("arr1[2]+1的地址为：%p\n",arr1[2] + 1); 

    return 0;
}