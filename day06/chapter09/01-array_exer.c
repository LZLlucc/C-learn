#include <stdio.h>

#define LEN 10

/* 
一维数组的课后练习：
第1波：数值型数组的特征值的计算 : 最大值、最小值、总和、平均数

 */
int main(){
    //定义一个int型的一维数组，包含10个元素，计算数组中所有元素的和以及平均数。
    int arr[LEN] = {30,402,12,33,-7,99,0,-56,33,66};

    int sum = 0; //记录总和

    for(int i = 0;i < LEN;i++){
        sum += arr[i];
    }
    
    printf("arr数组的总和为：%d\n",sum);

    int avg = sum / LEN;
    printf("arr数组的平均值为：%d\n",avg);  

    //拓展：计算数组的最大值、最小值
    int max = arr[0];  //记录最大值
    int max_index = 0; //记录最大值对应的索引
    for(int i = 1;i < LEN;i++){
        if(arr[i] > max){
            max = arr[i];
            max_index = i;
        }
    }
    
    printf("arr数组的最大值为：%d\n",max);
    printf("arr数组的最大值对应的索引为：%d\n",max_index);
    
    
    
    int min = arr[0]; //记录最小值
    int min_index = 0; //记录最小值对应的索引
    for(int i = 1;i < LEN;i++){
        if(arr[i] < min){
            min = arr[i];
            min_index = i;
        }
    }
    
    printf("arr数组的最大值为：%d\n",min);
    printf("arr数组的最大值对应的索引为：%d\n",min_index);


}