#include <stdio.h>

/* 
函数指针的应用：回调函数


1、概念：如果一个函数指针作为形参声明在另一个函数a中，则函数a就称为回调函数

2、应用举例

 */
//有两个整数a和b，由用户输入1,2或3。如输入1，程序就给出a和b中的大者，
//输入2，就给出a和b中的小者，输入3，则求a与b之和。

int max(int a,int b){
    return (a > b)?a :b;
}

int min(int a,int b){
    return (a < b)?a :b;
}

int sum(int a,int b){
    return a + b;
}

int operate(int a,int b,int (*ptr_func)(int,int)){

    return ptr_func(a,b);
}

int main(){
    int a = 10,b = 40;
    printf("请输入1,2或3：");
    int selection;
    scanf("%d",&selection);

    int result;
    switch(selection){
        case 1:
            result = operate(a,b,max);
            printf("最大值为：%d\n",result);
            break;
        case 2:
            result = operate(a,b,min);
            printf("最小值为：%d\n",result);
            break;
        case 3:
            result = operate(a,b,sum);
            printf("总和为：%d\n",result);
            break;    
            
    }
    

    return 0;
}