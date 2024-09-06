#include <stdio.h>

/* 
switch-case练习：
从键盘上输入2025年的“month”和“day”，要求通过程序输出输入的日期为2025年的第几天。

拓展：从键盘分别输入年、月、日，判断这一天是当年的第几天
 */
int main(){

    int month,day;
    printf("请输入月份:");
    scanf("%d",&month);
    printf("请输入日期:");
    scanf("%d",&day);

    //不在此处进行合法性的校验了 （专门的正则表达式校验）

    int sum_days = 0; //记录是2025年的第几天

    //方式1：不展开实现
    // switch(month){
    //     case 1:
    //         sum_days = day;
    //         break;
    //     case 2:
    //         sum_days = 31 + day;
    //         break;
    //     case 3:
    //         sum_days = 31 + 28 + day;
    //         break;
    //     case 4:
    //         sum_days = 31 + 28 + 31 + day;
    //         break;
    //     //....
    // }

    //方式2：
    switch(month){
        case 12:
            sum_days += 30;
        case 11:
            sum_days += 31;
        case 10:
            sum_days += 30;
        case 9:
            sum_days += 31;
        case 8:
            sum_days += 31;
        case 7:
            sum_days += 30;
        case 6:
            sum_days += 31;
        case 5:
            sum_days += 30;
        case 4:
            sum_days += 31;  //...
        case 3:
            sum_days += 28;  //2月份的总天数
        case 2:
            sum_days += 31;  //1月份的总天数
        case 1:
            sum_days += day;
            break;
    }

    printf("%d月%d日是2025年的第%d天\n",month,day,sum_days);

    return 0;
}