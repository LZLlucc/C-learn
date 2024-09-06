#include <stdio.h>

/* 
创建长度为10的数组，元素依次赋值为0，1，2，3，4，5，6，7，8，9，并按逆序输出每个元素。
 */
int main(){

    //使用方式1：
    int arr1[] = {0,1,2,3,4,5,6,7,8,9};

    //使用方式2：
    int arr2[10];

    //通过循环的方式给数组元素赋值
    int arr2_len = sizeof(arr2) / sizeof(int);
    for(int i = 0;i < arr2_len;i++){
        arr2[i] = i;
    }

    //遍历
    int arr1_len = sizeof(arr1) / sizeof(int);
    for(int i = arr1_len - 1;i >= 0;i--){
        printf("%d\t",arr1[i]);
    }

    printf("\n");

    return 0;

}