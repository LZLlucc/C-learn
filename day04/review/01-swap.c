#include <stdio.h>

int main()
{
    // 需求：声明两个int型变量，交换这两个变量的值
    int m = 100, n = 200;
    printf("m = %d,n = %d\n", m, n);

    // 错误的！
    //  m = 20;
    //  n = 10;

    // 正确的：
    // 方式1：定义临时变量 （推荐）
    int temp = m;
    m = n;
    n = temp;

    //方式2：可读性差；存在精度损失问题
    // m = m + n;
    // n = m - n;
    // m = m - n;

    //方式3：可读性差；不存在精度损失问题
    // m = m ^ n;  // m ^ n ^ m --> n
    // n = m ^ n;
    // m = m ^ n;


    printf("m = %d,n = %d\n", m, n);

    return 0;
}