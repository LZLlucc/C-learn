#include <stdio.h>
/* 
第3波：数组元素的反转


 */
int main(){

    int arr[] = {1,2,3,4,5,6,7,8,9};

    int arr_len = sizeof arr / sizeof(int); //获取数组的长度

    //遍历
    for(int i = 0;i < arr_len;i++){
        printf("%d\t",arr[i]);
    }
    printf("\n");

    //数组的反转
    //方式1：
    // for(int i = 0;i < arr_len / 2;i++){
    //     //交换角标i和角标arr_len - 1 - i 位置上的元素
    //     int temp = arr[i];
    //     arr[i] = arr[arr_len - 1 - i];
    //     arr[arr_len - 1 - i] = temp;
    // }

    //方式2：
    for(int left = 0,right = arr_len - 1;left < right;left++,right--){
        //交换角标left和right位置上的值
        int temp = arr[left];
        arr[left] = arr[right];
        arr[right] = temp;
    }


    //遍历
    for(int i = 0;i < arr_len;i++){
        printf("%d\t",arr[i]);
    }
    printf("\n");

    return 0;
}