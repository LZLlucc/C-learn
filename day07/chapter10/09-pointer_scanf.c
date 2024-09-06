#include <stdio.h>
#define N 5
/*
练习：数组元素的赋值：scanf()
 */
int main()
{

    int arr[N];

    //方式1：使用数组名和下标、数组名+偏移量表示
    // for(int i = 0;i < N;i++){
    //     printf("请输入第%d个元素：",i + 1);
    //     //方式1：
    //     // scanf("%d",&arr[i]);
    //     //方式2：
    //     scanf("%d",arr + i);
    // }

    //方式2：使用指针变量 + 偏移量
    // int *ptr = arr;
    // for(int i = 0;i < N;i++){
    //     printf("请输入第%d个元素：",i + 1);
    //     scanf("%d",ptr + i);
    // }

    //方式3：使用指针变量++
    int *ptr1;
    for(ptr1 = arr;ptr1 < arr + N;ptr1++){
         //printf("请输入第%d个元素：",i + 1); 
         scanf("%d",ptr1);  
    }

    //遍历：使用ptr1实现遍历
    //重置ptr1
    ptr1 = arr;
    for(int i = 0;i < N;i++){
        printf("arr[%d] = %d\n",i,*(ptr1 + i));
    }

    //遍历
    // for(int i = 0;i < N;i++){
    //     printf("arr[%d] = %d\n",i,arr[i]);
    // }


    return 0;
}