#include <stdio.h>

/*
运算符之三：比较运算符的使用


1、  >  >=   <   <=  ==  !=

2、 == 与 = 注意其区别！
 */
int main()
{

    printf("12 > 6 的结果是：%d\n", (12 > 6));
    printf("12 >= 6 的结果是：%d\n", (12 >= 6));
    printf("-12 > 6 的结果是：%d\n", (-12 > 6));
    printf("-12 < 6 的结果是：%d\n", (-12 < 6));
    printf("-12 == 6 的结果是：%d\n", (-12 == 6));
    printf("-12 != 6 的结果是：%d\n", (-12 != 6));

    int a = 0;
    int b = 1;
    if (a == b)  //区别于if(a = b)
    {
        printf("true");
    }
    else
    {
        printf("false");
    }

    int i = 10;
    printf("结果为:%d\n",(i == 20)); //0
    printf("结果为:%d\n",(i = 20));  //20

    return 0;
}