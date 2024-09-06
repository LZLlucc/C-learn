#include <stdio.h>
#include <stdarg.h>

/* 
可变参数的函数的使用

1、举例：printf(const char *str,...);

2、需求：定义一个函数，用于计算几个整数的和,并返回总和

3、体会：va_list 数据类型、va_start()、va_arg()、va_end()函数的使用
 */

//
int sum(int i,...){
    int result = 0; //记录总和

    va_list va;  //声明可变参数的变量
    va_start(va,i); //初始化可变参数结构
    for(int j = 0;j < i;j++){
        result += va_arg(va,int);  //此函数每调用一次，就取出可变参数列表中的一个值

    }
    va_end(va); //结束可变参数的调用

    return result;
}


int main()
{
    printf("hello\n");
    printf("num = %d\n",10);
    printf("a = %d,b = %d\n",10,20);

    int result = sum(3,10,20,30);
    printf("总和为：%d\n",result);

    result = sum(5,100,200,300,400,500);
    printf("总和为：%d\n",result);
    return 0;
}