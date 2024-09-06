#include <stdio.h>
/*
递归函数的使用

递归函数：函数调用中出现了自己调用自己的情况

优点：使用递归函数大大简化了算法的编写。

缺点：递归调用会占用大量的系统堆栈，`内存耗用多`；而且在递归调用层次多时速度要比循环`慢的多`，
       所以在使用递归时要慎重。尤其是要求高性能的情况下尽量避免使用递归，而使用循环迭代。
 */

// 举例1：计算1 ~ n的和
// 没有使用递归函数
int getSum(int n)
{
    int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        sum += i;
    }
    return sum;
}

// 使用递归函数
int getSum1(int n)
{
    if (n == 1)
    {
        return 1;
    }
    return n + getSum1(n - 1);
}

// 举例2：计算n!
int factorial(int n)
{
    if (n == 1)
    {
        return 1;
    }

    return n * factorial(n - 1);
}

// 举例3：已知一个数列：f(20) = 1，f(21) = 4，f(n+2) = 2*f(n+1)+f(n)，
// 其中n是大于0的整数，求f(10)的值。
int f(int n)
{
    if (n == 20)
    {
        return 1;
    }
    else if (n == 21)
    {
        return 4;
    }
    else
    {
        return f(n + 2) - 2 * f(n + 1);
    }
}

// 举例4：已知有一个数列：f(0) = 1，f(1) = 4，f(n+2)=2*f(n+1) + f(n),
// 其中n是大于0的整数，求f(10)的值。

int func(int n)
{
    if (n == 0)
    {
        return 1;
    }
    else if (n == 1)
    {
        return 4;
    }
    else
    {
        return 2 * func(n - 1) + func(n - 2);
    }
}

//举例5：斐波那契数列
// 递归函数，计算第n个斐波那契数
int fibonacciRecursion(int n) {
    if(n == 1 || n == 2){
        return 1;
    }else{
        return fibonacciRecursion(n - 1) + fibonacciRecursion(n - 2);
    }
}

//举例6：遍历一个文件目录下所有文件、查询并输出所有文件的大小、删除一个文件目录

int main()
{

    int n = 14;
    int result = f(n);
    printf("result = %d\n", result);

    int m = 10;
    int result1 = func(m);
    printf("result1 = %d\n", result1);

    int result2 = fibonacciRecursion(10);
    printf("result2 = %d\n", result2);

    return 0;
}