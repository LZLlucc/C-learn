#include <stdio.h>
#define N 5
/*
小结：遍历数组的几种写法
 */
int main()
{

    int arr1[N] = {10,20,30,40,50};

    //方式1：数组名+角标
    for(int i = 0;i < N;i++){
        printf("%d\t",arr1[i]);
    }
    printf("\n");

    //方式2：数组名+偏移量
    for(int i = 0;i < N;i++){
        printf("%d\t",*(arr1 + i));
    }
    printf("\n");

    //方式3：指针+偏移量
    int *ptr1 = arr1;  //等价于 int *ptr1 = &arr1[0];
    for(int i = 0;i < N;i++){
        printf("%d\t",*(ptr1 + i));
    }
    printf("\n");

    //方式4：指针++
    int *ptr2;
    for(ptr2 = arr1;ptr2 < arr1 + N;ptr2++){
        printf("%d\t",*ptr2);
    }
    printf("\n");

    //特别的：
    int *ptr3 = &arr1[2];
    for(int i = -2;i < N - 2;i++){
        printf("%d\t",*(ptr3 + i));
    }
    printf("\n");

    return 0;
}