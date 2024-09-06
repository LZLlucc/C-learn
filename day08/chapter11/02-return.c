#include <stdio.h>


/* 
关于return 关键字的使用

1、return关键字的作用
    > 结束当前函数的执行
    > 可以通过“return 返回值”的方式，返回给函数的调用者一个指定类型的数据

2、需求
- 定义函数addInt(int,int)，计算任意两个int类型变量的和并返回；
- 定义函数addDouble(double,double)，计算任意两个double类型变量的和并返回；
- 定义函数printEvenOrOdd(int)，判断一个整数是偶数还是奇数，并输出；
- 定义函数printNum(int start,int limit)，遍历输出从start到limit范围的数据，一旦遇到5的倍数，停止执行。
 
3、return关键字的后面，不能声明执行语句。因为不可能被执行！
 */

int addInt(int m,int n){
    // int sum = m + n;
    // return sum;
    return m + n;
}

double addDouble(double d1,double d2){
    return d1 + d2;
}

void printEvenOrOdd(int number){
    // if(number % 2 == 0){
    //     printf("%d是偶数",number);
    // }else{
    //     printf("%d是奇数",number);
    // }

    if(number % 2 == 0){
        printf("%d是偶数\n",number);
        return;
    }

    printf("%d是奇数\n",number);
}

void printNum(int start,int limit){
    for(int i = start;i <= limit;i++){
        if(i % 5 == 0){
            return ;
            printf("程序终止...");
        }

        printf("%d\n",i);

    }
}

int main()
{
    int m = 10;
    int n = 20;

    int sum = addInt(m,n);
    printf("sum = %d\n",sum);


    int number = 10;
    printEvenOrOdd(10);


    printNum(3,12);


    short s1 = 10;
    short s2 = 20;
    double sum1 = addDouble(s1,s2);  //将两个short类型的变量赋值给double类型

    return 0;
}