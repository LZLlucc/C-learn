#include <stdio.h>
/*
二维数组的基本使用

① 二维数组的定义
② 数组中元素的调用
③ 关于长度
④ 遍历数组
⑤ 数组的内存分析


 */
int main()
{
    // 1、二维数组的定义
    // 方式1：数组的声明和数组元素的赋值分开进行
    int arr1[4][6];
    // 通过角标的方式赋值
    arr1[0][0] = 10;
    arr1[0][5] = 20;
    arr1[3][5] = 30;

    // 方式2：数组的声明和数组元素的赋值同时进行
    int arr2[3][4] = {
        {1, 2, 3, 4}, 
        {5, 6, 7, 8}, 
        {9, 10, 11, 12}};

    int arr3[][4] = {
        {1, 2, 3, 4}, 
        {5, 6, 7, 8}, 
        {9, 10, 11, 12}}; 

    //不推荐的写法：
    int arr4[2][4] = {1,2,3,4,5,6,7,8};       
    int arr5[][4] = {1,2,3,4,5,6,7,8};       
    int arr6[][4] = {1,2,3,4,5,6,7,8,9}; 

    // 数组一旦定义，其长度就是确定的！长度不可修改。

    //2、数组中元素的调用
    //使用角标的方式。注意角标的范围。
    //合法的角标举例：
    printf("arr2[%d][%d] = %d\n",0,0,arr2[0][0]); //1
    printf("arr2[%d][%d] = %d\n",1,1,arr2[1][1]); //6
    printf("arr2[%d][%d] = %d\n",2,2,arr2[2][2]); //11
    //非法的角标举例：
    //printf("arr2[%d][%d] = %d\n",0,4,arr2[0][4]); //
    //printf("arr2[%d][%d] = %d\n",2,4,arr2[2][4]); //

    //3、关于长度
    printf("arr2占用的字节数为：%zu\n",sizeof arr2); //48
    printf("arr2[0]占用的字节数为：%zu\n",sizeof arr2[0]); //16
    printf("arr2[0][0]占用的字节数为：%zu\n",sizeof arr2[0][0]); //4

    printf("arr2外层元素的个数：%zu\n",sizeof arr2 / sizeof arr2[0]); //3
    printf("arr2内层元素的个数：%zu\n",sizeof arr2[0] / sizeof arr2[0][0]); //4
    printf("arr2内层元素的个数：%zu\n",sizeof arr2[0] / sizeof (int)); //4

    //4、遍历数组
    int arr2_row = sizeof arr2 / sizeof arr2[0]; //行数
    int arr2_column = sizeof arr2[0] / sizeof arr2[0][0]; //列数
    for(int i = 0; i < arr2_row;i++){
        for(int j = 0;j < arr2_column;j++){
            printf("%d\t",arr2[i][j]);
        }
        printf("\n");
    }

    return 0;
}