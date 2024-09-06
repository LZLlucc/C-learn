#include <stdio.h>

int main()
{

    int sum = 0;
    int i = 0;

    for (i = 1; i <= 5; i++)
    {
        sum += i;
        printf("\n i = %d", i);
        printf("\n sum = %d", sum);
    }
    printf("退出for循环了~~");

    return 0;
}