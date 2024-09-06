#include <stdio.h>
#include <string.h>
/*
第2波：数组的复制

方式2：使用memcpy()。
此函数有3个参数：
    参数1：目标数组
    参数2：源数组
    参数3：源数组的字节数


对比两种方式：

角度1：是否容易理解。
  方式1更简单、直观、易上手。而方式2需要导入头文件，熟悉函数的参数等

角度2：执行的性能角度
  方式2的效率会更高。
 */
#define N 10

int main()
{
    int arr1[N] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10}; // 源数组
    int arr2[N];                                   // 目标数组

    memcpy(arr2, arr1, sizeof arr1);

    //测试：修改arr2中某个元素的值
    arr2[4] = 50;

    for (int i = 0; i < N; i++)
    {
        printf("arr2[%d] = %d\n", i, arr2[i]);
    }

    for (int i = 0; i < N; i++)
    {
        printf("arr1[%d] = %d\n", i, arr1[i]);
    }

    return 0;
}