#include <stdio.h>

/*

为抵抗洪水，战士连续作战89小时，编程计算共多少天零多少小时？
 */

int main()
{

    int hours = 89;

    int day = 89 / 24;
    int hour = 89 % 24;

    printf("%d小时对应的是%d天零%d小时\n",hours,day,hour);

    return 0;
}
