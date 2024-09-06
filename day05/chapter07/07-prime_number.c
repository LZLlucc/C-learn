#include <stdio.h>
#include <stdbool.h>
#include <math.h>
/*
需求：要求输入一个数字，判断该数字是否是质数。

质数：也称为素数。只能被1和它本身整除的自然数  --> 从2开始到这个数-1为止，这个范围内不存在此数的约数。

 */
int main()
{
    int num = 67;
    num = 44;

    bool flag = true; //判断当前num是否是一个质数的标识

    //遍历2到num-1范围的所有的整数
    for(int i = 2;i <= sqrt(num);i++){

        if(num % i == 0){ //若能被i除尽，则修改此flag
            flag = false;
            break;  //针对于非质数的情况是提效的
        }

    }

    if(flag){
        printf("%d是质数\n",num);
    }else{
        printf("%d不是质数\n",num);
    }

    return 0;
}