#include <stdio.h>

/* 
练习：定义short类型数组，使用指针自增顺序遍历数组，使用指针自减逆序遍历数组。
 */
int main()
{

    short arr[5] = {10,20,30,40,50};

    short *ptr1 = arr;
    const int LEN = 5;

    //使用指针自增的方式遍历
    for(int i = 0;i < LEN;i++){
        printf("arr[%d] = %d\n",i,*(ptr1++));
    }

    //使用指针自减逆序遍历数组
    for(int i = LEN - 1;i >= 0;i--){
        //写法1：
        // ptr1--;
        // printf("arr[%d] = %d\n",i,*ptr1);
        //写法2：
        printf("arr[%d] = %d\n",i,*(--ptr1));
    }

    //总结：数组的遍历方式3 （前两种在02-pointer_add_number_exer.c中讲的）
    //
    short *ptr = arr;
    for(int i = 0;i < LEN;i++){
        printf("%d\n",*(ptr++));
    }
    //数组的遍历方式4
    short *ptr2;
    for(ptr2 = arr;ptr2 < arr + LEN;ptr2++){
        printf("%d\n",*ptr2);
    }

    return 0;
}