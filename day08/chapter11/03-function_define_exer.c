#include <stdio.h>
/* 
① 编写程序，声明一个print1()函数，在函数中打印一个`10*8的*型矩形`。

② 编写程序，声明一个print2()函数，除打印一个`10*8的*型矩形`外，再计算该矩形的面积，并将其作为函数返回值。

③ 编写程序，声明一个print3()函数，函数提供m和n两个参数，函数中打印一个`m*n的*型矩形`，并计算该矩形的面积， 将其作为返回值。
 */

void print1(){

    for(int i = 1;i <= 10;i++){
        for(int j = 1;j <= 8;j++){
            printf("* ");
        }
        printf("\n");
    }

}

int print2(){
    for(int i = 1;i <= 10;i++){
        for(int j = 1;j <= 8;j++){
            printf("* ");
        }
        printf("\n");
    }

    return 10 * 8;
}

int print3(int m,int n){
    for(int i = 1;i <= m;i++){
        for(int j = 1;j <= n;j++){
            printf("* ");
        }
        printf("\n");
    }

    return m * n;
}

int main(){

    //print1();

    //print2();

    // int area = print2();
    // printf("面积为%d\n",area);

    int area1 = print2(3,4);
    printf("面积为%d\n",area1);

    return 0;

}