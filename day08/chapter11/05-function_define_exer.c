#include <stdio.h>
#include <math.h>

/* 
需求：任一大于 2 的偶数都可写成两个素数之和。利用判断素数的函数 prime()验证哥德巴赫猜想。

 */

//判断num是否是一个质数。如果是质数，返回1 ； 否则返回0
int prime(int num){

    for(int i = 2;i <= sqrt(num);i++){

        if(num % i == 0){
            return 0; //表示num不是一个质数
        }

    }

    return 1; //表示num是一个质数

}



int main(){

    int num;
    printf("请输入一个偶数：");
    scanf("%d",&num);

    for(int i = 2;i <= num / 2;i++){
        if(prime(i) && prime(num - i)){
            printf("%d = %d + %d\n",num,i,num - i);
            //break;
        }
    }


    return 0;
}