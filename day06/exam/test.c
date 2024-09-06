#include <stdio.h>

int main(){
    //第4题
    // 有数组 double nums[4] = {12.0, 65.2, 11.8, 13.3};，请写代码，计算所有元素的和。
    double nums[4] = {12.0, 65.2, 11.8, 13.3};

    double sum = 0;
    
    for(int i = 0;i < 4;i++){
        sum += nums[i];
    }

    printf("总和为：%lf",sum);

    //第5题
    //如何计算数组的长度。以数组int arr[5]; 为例说明
    int arr[5];

    printf("数组的长度为：%zu\n",sizeof arr / sizeof(arr[0]));
    printf("数组的长度为：%zu\n",sizeof arr / sizeof(int));


    return 0;
}