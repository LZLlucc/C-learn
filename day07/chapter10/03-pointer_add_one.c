#include <stdio.h>

/*
指针的运算类型2：指针的自增、自减运算

 */
int main()
{
    int arr[5] = {10,20,30,40,50};

    int *ptr1 = &arr[0];

    printf("ptr1的地址为%p,ptr1对应的数据值为：%d\n",ptr1,*ptr1);

    ptr1++;

    printf("ptr1的地址为%p,ptr1对应的数据值为：%d\n",ptr1,*ptr1);

    ptr1++;

    printf("ptr1的地址为%p,ptr1对应的数据值为：%d\n",ptr1,*ptr1);

    ptr1--;

    printf("ptr1的地址为%p,ptr1对应的数据值为：%d\n",ptr1,*ptr1);

    //
    printf("ptr1++对应的数据值为：%d\n",*(ptr1++)); //20
    printf("ptr1对应的数据值为：%d\n",*ptr1);  // 30

    printf("ptr1++对应的数据值为：%d\n",*ptr1++); //30
    printf("ptr1对应的数据值为：%d\n",*ptr1); //40

    int *ptr2 = &arr[2];
    printf("--ptr2对应的数据值为：%d\n",*(--ptr2));  // 20
    printf("--ptr2对应的数据值为：%d\n",*ptr2);  // 20

}