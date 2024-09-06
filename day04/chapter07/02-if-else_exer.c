#include <stdio.h>

/* 
编写一个程序，判定某个年份是否为闰年。年份满足如下条件之一，即是闰年：

(1) 能被4整除，但不能被100整除：year % 4 == 0 && year % 100 != 0

(2) year 是 400 的整倍数： year % 400 == 0
 */
int main()
{
    int year; //待判断的年份

    printf("请输入年份：");
    scanf("%d",&year);

    if((year % 4 == 0 && year % 100 != 0) || year % 400 == 0){
        printf("%d年是闰年\n",year);
    }else{
        printf("%d年是平年\n",year);
    }

    return 0;
}