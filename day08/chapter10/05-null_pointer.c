#include <stdio.h>
/* 
空指针的说明：

1、在没有对指针变量赋值时，指针变量的值是不确定的，可能系统会分配一个未知的地址，
此时使用此指针变量可能会导致不可预料的后果甚至是系统崩溃。

 */
int main(){

    int num = 10;
    int *ptr = &num;

    int *ptr1;   

    printf("ptr1的地址为：%p\n",ptr1);
    printf("ptr1的地址为：%p\n",&ptr1);
    //printf("ptr1指向位置的数据为：%d\n",*ptr1);

    //*ptr1 = 10;

    //推荐在使用指针之前，可以先给指针赋值为NULL
    ptr1 = NULL;

    int *ptr2 = NULL; //ptr2在内存中分配内存了，其有具体明确的地址值，但是其保存的数据是NULL，表示不保存任何一个int型数据的地址。
    printf("ptr2的地址为：%p\n",&ptr2);
    printf("ptr2的值为：%p\n",ptr2);

    //*ptr1 = 10;

    return 0;
}