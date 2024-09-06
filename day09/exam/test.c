#include <stdio.h>

/* 
练习5：编写一个函数 int isLeapYear(int year)，该函数接收一个年份，
并检查它是否为闰年。如果是闰年，则返回1，否则返回0。如果输入年份为负数，
则返回-1作为错误标志。（能被4整除且不能被100整除，或者能被400整除）
 */

int isLeapYear(int year){
    //方式1：
    // if(year >= 0){

    //     if((year % 4 == 0 && year % 100 != 0) || year % 400 == 0){
    //         return 1;
    //     }else{
    //         return 0;
    //     }

    // }else{
    //     return -1;
    // }
    //方式2：
    if(year >= 0){
        return (year % 4 == 0 && year % 100 != 0) || year % 400 == 0;
    }
    return -1;
}


int main(){
    int year = -12;
    year = 2024;
    int isLeap = isLeapYear(year);
    printf("%d\n",isLeap);

    return 0;
}