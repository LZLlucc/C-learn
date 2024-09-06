#include <stdio.h>

/*
案例：体会循环结构中使用break

输入两个正整数m和n，求其最大公约数和最小公倍数。

比如：12和20的最大公约数是4，最小公倍数是60。

结论：
总结结束循环的两种情况：
1、循环条件返回false（即0），则退出循环结构
2、在循环体中，满足某个条件情况下执行break，跳出循环结构


 */
int main()
{
    int m, n;
    printf("请输入两个整数(空格间隔):");
    scanf("%d %d", &m, &n);

    // 获取最大公约数
    int min = (m < n) ? m : n;
    for (int i = min; i >= 1; i--)
    {
        if (m % i == 0 && n % i == 0)
        {
            printf("最大公约数:%d\n", i);
            break; // 一旦执行，就跳出当前循环结构
        }
    }

    //获取最小公倍数
    int max = (m > n)? m : n;
    for(int i = max;i <= m * n;i++){
        if(i % m == 0 && i % n == 0){
            printf("最小公倍数：%d\n",i);
            break;  // 一旦执行，就跳出当前循环结构
        }
    }

    return 0;
}