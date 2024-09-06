#include <stdio.h>
#define N 10
/*
定义函数，实现数组元素的反转操作、遍历操作
 */

// 实现数组元素的反转操作
void reverse(int arr[], int len)
{
    for (int left = 0, right = len - 1; left < right; left++, right--)
    {
        int temp = arr[left];
        arr[left] = arr[right];
        arr[right] = temp;
    }
}

// 实现数组元素的遍历操作
void print(int arr[], int len)
{
    for (int i = 0; i < len; i++)
    {
        printf("%d\t", arr[i]);
    }
    printf("\n");
}

int main()
{

    int arr[N] = {1, 3, 54, 3, 56, 3, 446, 6, 34, 45};

    print(arr, N);

    //反转数组
    reverse(arr,N);

    print(arr, N);

    //测试：形参是数组，实参是指针
    int *ptr_arr = arr;
    // reverse(ptr_arr,N);

    return 0;
}