#include <stdio.h>
/* 
指针的运算类型4：指针间的比较运算 

 ==  !=  >  >=   <  <=  

 比较的结果是 ： 1 (真)、0(假)
 */
int main(){

    int arr[5] = {1, 2, 3, 4, 5};
    int *p1 = &arr[0];
    int *p2 = &arr[3];

    printf("%d\n",p1 > p2);  //0
    printf("%d\n",p1 < p2);  //1
    printf("%d\n",p1 == p2); //0
    printf("%d\n",p1 != p2); //1


    double d1 = 12.3;
    double *p3 = &d1;

    //printf("%d\n",p1 > p3);  //比较是无意义的。



}