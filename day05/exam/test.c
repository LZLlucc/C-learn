#include <stdio.h>

int main()
{
    // 第2题：
    int a = 3;
    int x = 100;
    switch (a)
    {
    case 1:
        x += 5;
        break;
    case 2:
        x += 10;
        break;
    case 3:
        x += 16;
        break;
    default:
        x += 34;
    }

    //第5题：
    /* 
    *
    **
    ***
    ****
    *****

     */

    for(int i = 1;i <= 5;i++){
        for(int j = 1;j <= i;j++){
            printf("*");
        }
        printf("\n");
    }

    return 0;
}