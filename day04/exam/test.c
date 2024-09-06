#include <stdio.h>

int main()
{
    // 第2题：
    //  int i = 1;
    //  int j = i++;
    //  int k = i++ * ++j + ++i * j++;

    // printf("i=%d,j=%d,k=%d\n", i, j, k);  // i=4,j=3,k=12

    // 第3题：
    int i = 1;
    i *= 0.2; // 等价于 i = (int)(i * 0.2);
    // i++;
    //++i;
    i = i++;
    printf("i = %d\n", i); // 0

    int m = 0;
    int n = m++;
    // m : 1, n : 0

    // 第4题
    // 使用if-else获取两个整数的较大值，并输出
    int num1 = 20, num2 = 10;
    int max;
    if (num1 >= num2)
    {
        max = num1;
    }
    else
    {
        max = num2;
    }
    printf("%d和%d的较大值为：%d\n", num1, num2, max);

    // 第5题
    int num = 10;
    if (num++ || num--)
    {
        num++;
    }
    printf("%d", ++num);  //13

    return 0;
}