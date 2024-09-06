#include <stdio.h>
#include <stdbool.h>
#include <math.h>

/*

输出100以内的所有的质数

 */
int main()
{

    
    bool flag = true; // 判断当前num是否是一个质数的标识

    for (int num = 2; num <= 100; num++)
    {

        // 遍历2到num-1范围的所有的整数
        for (int i = 2; i <= sqrt(num); i++)
        {

            if (num % i == 0)
            { // 若能被i除尽，则修改此flag
                flag = false;
                break; // 针对于非质数的情况是提效的
            }
        }

        if (flag)
        {
            printf("%d是质数\n", num);
        }

        //重置flag
        flag = true;
    }

    return 0;
}