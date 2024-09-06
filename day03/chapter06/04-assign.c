#include <stdio.h>

/* 
运算符之二：赋值运算符的使用


1、=   +=  -=  *=  /=  %=

2、说明
= : 两侧数据类型不一致时，可以使用自动类型转换或使用强制类型转换原则进行处理。
  : 支持连续赋值

+=  -=  *=  /=  %= : 在使用以后，不会改变变量本身的数据类型

 */
int main()
{

    int i = 10;
    double d1 = i; //自动类型转换
    short s1 = (short)i;  //强制类型转换

    //连续赋值
    int m,n;
    m = n = 10;

    int a = 10,b = 20;


    //以 += 为例说明：
    int j = 10;
    j += 4;  //类似于 j = j + 4;
    printf("j = %d\n",j); //14

    j -= 5; //类似于 j = j - 5;
    printf("j = %d\n",j);  //9

    int k = 12;
    k %= 5;  //类似于 k = k % 5;
    printf("k = %d\n",k); // 2

    //练习：声明一个short型变量，赋值为10.将其增加2
    //方式1：
    short s = 10;
    s = (short)(s + 2);
    printf("s = %hd\n",s); //12

    //方式2：推荐
    short ss = 10;
    ss += 2;
    printf("ss = %hd\n",ss); //12

    printf("占用的字节数为：%zu\n",sizeof(s + 2)); //4
    printf("占用的字节数为：%zu\n",sizeof(s += 2)); //2

    //练习
    int num = 1;
    num *= 0.1; //num = (int)(num * 0.1);

    printf("num = %d\n",num);//0

    return 0;
}