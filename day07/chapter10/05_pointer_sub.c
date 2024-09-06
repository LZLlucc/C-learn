#include <stdio.h>

/* 
指针的运算类型3：同类型指针变量间的相减运算
 */
int main()
{
    int arr[5] = {10,20,30,40,50};

    int *ptr1 = &arr[2];

    int *ptr2 = &arr[4];

    ptrdiff_t diff1 = ptr1 - ptr2;
    printf("diff1 = %td\n",diff1); //-2 得到两个地址相差多少个数据单位  


    //如下的i和j虽然数据类型相同，但是由于存储时不要求是连续存储的，所以比较其间隔的数据单位没有意义。
    int i = 10,j = 20;
    int *p1 = &i;
    int *p2 = &j;

    printf("p1和p2间隔%td个数据单位\n",p1 - p2);

    //数据类型不同的两个数据，比较相差的距离，没有任何意义
    double d1 = 10.1;
    double *p3 = &d1;
    //printf("p1和p3间隔%td个数据单位\n",p1 - p3); //报错


    //两个指针变量作加法是没有意义的
    //printf("ptr1 + ptr2的值为：%td\n",ptr1 + ptr2);

    return 0;
}