
#include <stdio.h>
/* 

 测试printf()函数的使用

1、printf()的作用：将具体的数据输出到控制台上。

2、具体的使用细节

 */
int main()
{

    //举例1：
    printf("helloworld");

    //举例2：
    printf("helloworld1\n");  // \n:换行符
    printf("helloworld2\n");

    //举例3：
    int m = 10;
    //格式字符串中出现了几个占位符，后续的数据列表中就应该提供相等占位符数量的变量或常量。
    printf("m = %d\n",m);  //%d：占位符。 所有的占位符都以%开始。不同类型的变量，占位符不同。
    
    //举例4：体会不同类型的占位符
    double weight = 100.5;
    printf("weight = %lf\n",weight);  //%lf:十进制double类型的占位符

    //举例5：体会多个占位符
    int a = 10,b = 20;
    printf("a = %d,b = %d\n",a,b);

    //举例6：如下的两个调用报错
    int n = 10;
    //printf(n);
    //printf(10);
    

    return 0;
}