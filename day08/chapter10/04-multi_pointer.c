#include <stdio.h>

/*
多级指针：

1、二级指针就是指向指针的指针

 */
int main()
{

    int num = 10;
    int *ptr = &num; // 一级指针

    int *ptr1 = ptr; // 一级指针

    int **pptr = &ptr; // 二级指针

    int ***ppptr = &pptr; // 三级指针

    // 获取数据10的几种写法
    printf("num = %d\n", num);
    printf("num = %d\n", *ptr);     // 使用一级指针
    printf("num = %d\n", **pptr);   // 使用二级指针
    printf("num = %d\n", ***ppptr); // 使用三级指针

    // 关注各自的地址
    printf("num的地址为：%p,num的值为：%d\n", &num, num);
    printf("ptr的地址为：%p,ptr的值为：%p,ptr指向的数据为：%d\n", &ptr, ptr, *ptr);
    printf("pptr的地址为：%p,pptr的值为：%p,pptr指向的数据为：%p\n", &pptr, pptr, *pptr);
    printf("ppptr的地址为：%p,ppptr的值为：%p,ppptr指向的数据为：%p\n", &ppptr, ppptr, *ppptr);


    //如下的操作：
    int a = 10;
    //int **ptr2 = &a; //错误
    
    //如何修改：
    int *ptr3 = &a;
    int **ptr4 = &ptr3;

    return 0;
}