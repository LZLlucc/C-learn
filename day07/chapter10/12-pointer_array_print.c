#include <stdio.h>

/* 
使用指针+角标的方式，遍历数组
 */
int main(){

    int arr[5] = {10,20,30,40,50};

    int *ptr ; 
    ptr = arr; //指针值：指向数组的首元素的地址

    for(int i = 0;i < 5;i++){
        printf("arr[%d] = %d\n",i,ptr[i]);   //ptr[i] 相当于 *(ptr + i)
    }


}