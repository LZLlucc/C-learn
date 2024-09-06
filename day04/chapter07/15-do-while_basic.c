
#include <stdio.h>
/*
do-while循环至少执行一次循环体
 */

int main()
{

    //while:
    int num = 10;
    while(num > 10){
        printf("hello:while");
        num--;
    }

    //do-while
    int num1 = 10;
    do{
        printf("hello:do-while");
        num1--;
    }while(num1 > 10);

    return 0;
}