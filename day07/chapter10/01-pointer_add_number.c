#include <stdio.h>

/*
指针的运算类型1：指针 ± 整数运算

说明：
这里的移动的整数，表示的是移动对应的数据单位，而非字节数的单位。
 */
int main()
{
    // 举例1：
    short *s;
    s = (short *)0x1234;
    printf("%#hx\n", s + 1); // 0x1236   复习：%#hx ：十六进制 short int 类型
    printf("%#hx\n", s - 1); // 0x1232

    int *i;
    i = (int *)0x1234;
    printf("%#x\n", i + 1); // 0x1238    复习：%#x ：十六进制整数

    // 举例2：
    int arr[5] = {10, 20, 30, 40, 50};

    int *ptr1 = arr; // arr表示的是数组首元素arr[0]的首地址

    printf("ptr1的地址为%p,ptr1指向的数据为：%d\n", ptr1, *ptr1);
    printf("ptr1+1的地址为%p,ptr1+1指向的数据为：%d\n", ptr1 + 1, *(ptr1 + 1));
    printf("ptr1 + 3的地址为%p,ptr1+3指向的数据为：%d\n", ptr1 + 3, *(ptr1 + 3));

    int *ptr2 = &arr[3];

    printf("ptr2 - 2 的地址为%p,ptr2 - 2指向的数据为：%d\n", ptr2 - 2, *(ptr2 -2));

    printf("ptr2的地址为%p,ptr2指向的数据为：%d\n", ptr2 , *ptr2);
    
    ptr2 -= 2; // ptr2 = ptr2 - 2;
    
    printf("ptr2的地址为%p,ptr2指向的数据为：%d\n", ptr2, *ptr2);


    return 0;
}