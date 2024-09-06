
#include <stdio.h>
/* 

随意给出一个整数，打印显示它的个位数，十位数，百位数的值。
格式如下：
数字xxx的情况如下：
个位数：
十位数：
百位数：

例如：
数字153的情况如下：
个位数：3
十位数：5
百位数：1
 */

int main(){

    int num;
    printf("请输入一个三位数：\n");
    scanf("%d",&num);

    //个位：
    int ge = num % 10; 
    //十位：
    int shi = num / 10 % 10;  //int shi = num % 100 / 10;
    //百位：
    int bai = num / 100;

    printf("整数%d：\n个位数是：%d\n十位数是：%d\n百位数是：%d\n",num,ge,shi,bai);


    return 0;
}