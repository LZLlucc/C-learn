#include <stdio.h>

int main()
{  
    //练习1：遍历数组的两种方式     
    int arr[5] = {10, 20, 30, 40, 50};
    const int LEN = 5;
    //遍历数组方式1：使用数组角标
    for(int i = 0;i < LEN;i++){
        printf("arr[%d] = %d\n",i,arr[i]);
    }

    //遍历数组方式2：使用指针
    int *ptr_arr = arr;  //int *ptr_arr = &arr[0];
    for(int i = 0;i < LEN;i++){
        printf("arr[%d] = %d\n",i,*(ptr_arr + i));
    }

    //练习2：体会 arr 和 &arr[0]的情况
    int *ptr1 = arr;  //数组首元素的地址
    int *ptr2 = &arr[0];

    printf("ptr1的地址为：%p,对应的数据值：%d\n",ptr1,*ptr1);
    printf("ptr2的地址为：%p,对应的数据值：%d\n",ptr2,*ptr2);

    //通过运算证明 arr 和 &arr[0] 表示的是同一个事，即数组首元素的地址
    printf("ptr1+1的地址为：%p,对应的数据值：%d\n",ptr1+1,*(ptr1+1));
    printf("ptr2+1的地址为：%p,对应的数据值：%d\n",ptr2+1,*(ptr2+1));

    return 0;
}