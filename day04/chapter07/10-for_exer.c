#include <stdio.h>
/* 
练习：体会循环中使用分支结构

输出所有的水仙花数，所谓水仙花数是指一个3位数，其各个位上数字立方和等于其本身。
例如： `153 = 1*1*1 + 3*3*3 + 5*5*5`

 */
int main(){

    int i;
    for(i = 100;i < 1000;i++){  //遍历所有的三位数

        //取出i各个位上的数值
        int ge = i % 10;   //个位
        int shi = i % 100 / 10; //int shi = i / 10 % 10;   //十位
        int bai = i / 100;   //百位

        if(i == ge*ge*ge + shi*shi*shi + bai*bai*bai){
            printf("%d\n",i);
        }

    }


    return 0;
}