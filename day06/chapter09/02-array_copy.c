#include <stdio.h>

/* 
第2波：数组的复制

方式1：使用循环依次赋值

 */
#define N 10

int main()
{
    int arr1[N] = {1,2,3,4,5,6,7,8,9,10};

    int arr2[N]; //与arr1数组的长度相同

    //使用for循环将arr1每个位置的元素复制到arr2数组的相应元素的位置
    for(int i = 0;i < N;i++){
        arr2[i] = arr1[i];
    }

    //测试：修改arr2某个位置上的元素，体会不影响arr1中相应位置元素的值
    arr2[2] = 20;

    //遍历arr2
    for(int i = 0;i < N;i++){
        printf("arr2[%d] = %d\n",i,arr2[i]);
    }

    printf("\n");

    //遍历arr1
    for(int i = 0;i < N;i++){
        printf("arr1[%d] = %d\n",i,arr1[i]);
    }

    return 0;
}