#include <stdio.h>

/*
练习：获取数组的最大值(使用指针)

 */
int main()
{

    int arr[] = {40, 32, 54, 222, -9, 543, 22, 44}; // 8个元素
    // 方式1：传统写法
    //  int max = arr[0];

    // for(int i = 1;i < 8;i++){
    //     if(max < arr[i]){
    //         max = arr[i];
    //     }
    // }

    // 方式2：使用指针
    int *ptr = arr;
    int max = *ptr; // 将数组的首元素赋值给max

    for (int i = 1; i < 8; i++)
    {
        if (max < *(ptr + i))
        {
            max = *(ptr + i);
        }
    }

    printf("数组的最大值为：%d\n", max);

    return 0;
}