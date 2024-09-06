#include <stdio.h>
/*
定义指针变量 p1、p2，默认各自指向整数a、b，a、b从键盘输入。
设计程序，使得 p1 指向其中的较大值，p2 指向其中的较小值 。
 */

int main()
{
    
    int a,b;

    printf("输入变量a和b的值(空格分隔):");
    scanf("%d %d",&a,&b);

    //默认指针变量p1、p2分别指向a、b
    int *p1 = &a;
    int *p2 = &b;

    printf("p1的地址为：%p,p1指向的数据的值为：%d\n",p1,*p1);
    printf("p2的地址为：%p,p2指向的数据的值为：%d\n",p2,*p2);

    if(a < b){
        int *temp = p1;
        p1 = p2; 
        p2 = temp;
    }


    printf("p1的地址为：%p,p1指向的数据的值为：%d\n",p1,*p1);
    printf("p2的地址为：%p,p2指向的数据的值为：%d\n",p2,*p2);

    return 0;
}