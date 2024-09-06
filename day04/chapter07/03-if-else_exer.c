#include <stdio.h>

/* 
由键盘输入三个整数分别存入变量num1、num2、num3，
对它们进行排序(使用 if-else if-else)，并且从小到大输出。

说明：嵌套分支结构的使用

 */
int main(){

    //1、从键盘获取三个整数
    int num1,num2,num3;
    printf("请输入三个整数：");
    scanf("%d %d %d",&num1,&num2,&num3);

    //2、给三个整数排序
    if(num1 < num2){
        if(num3 < num1){
            printf("%d-%d-%d\n",num3,num1,num2);
        }else if(num3 > num2){
            printf("%d-%d-%d\n",num1,num2,num3);
        }else{
            printf("%d-%d-%d\n",num1,num3,num2);
        }
    }else{  //num2 <= num1
       if(num3 < num2){
            printf("%d-%d-%d\n",num3,num2,num1);
        }else if(num3 > num1){
            printf("%d-%d-%d\n",num2,num1,num3);
        }else{
            printf("%d-%d-%d\n",num2,num3,num1);
        } 
    }


    return 0;
}