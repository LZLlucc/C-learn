#include <stdio.h>

/* 
创建一个int类型的变量num，使用取址运算符取出其地址，并将其地址赋值给一个指针，
然后分别打印变量的值、变量的地址、指针的值、指针的地址，并使用指针参数调用
scanf()修改变量num的值。 
 */
int main(){

    int num = 10;

    int *ptr1 = &num;

    printf("num = %d\n",num);
    printf("num的地址：%p\n",&num);

    printf("ptr1的值：%p\n",ptr1);
    printf("ptr1的地址为：%p\n",&ptr1);

    printf("请输入num的新值：");
    //scanf("%d",&num);
    //改写为使用指针的方式：
    scanf("%d",ptr1);

    printf("num = %d\n",num);


    return 0;
}