#include <stdio.h>

/* 
函数原型的理解

 */

//函数原型
int addInt(int ,int );  //也可以写为：int addInt(int m,int n)

double addDouble(double,double); //也可以写为：double addDouble(double d1,double d2)


int main()
{
    int sum = addInt(10,20);
    printf("sum = %d\n",sum);
    return 0;
}

int addInt(int m,int n){
    // int sum = m + n;
    // return sum;
    return m + n;
}

double addDouble(double d1,double d2){
    return d1 + d2;
}