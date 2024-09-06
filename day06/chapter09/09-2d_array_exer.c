#include <stdio.h>
/* 
练习：给定二维数组中的最大值以及对应的行列角标
 */

int main(){

    int arr[][4] = {
        {23,454,2,55},
        {45,33,67},
        {45,77,33,99}
    };

    int max = arr[0][0]; //记录最大值
    int max_row; //记录最大值对应的行角标
    int max_column; //记录最大值对应的列角标

    //获取数组的行数、列数
    int arr_row = sizeof arr / sizeof arr[0];
    int arr_column = sizeof arr[0] / sizeof arr[0][0];

    //通过遍历数组，获取最大值，及对应的行列角标
    for(int i = 0;i < arr_row;i++){
        for(int j = 0;j < arr_column;j++){
            // if(arr[i][j] > max){
            //     max = arr[i][j];
            //     max_row = i;
            //     max_column = j;
            // }
            
        }
    }

    printf("数组的最大值为：%d\n",max);
    printf("最大值对应的行角标为%d,列角标为%d\n",max_row,max_column);

    return 0;
}