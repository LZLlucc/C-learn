#include <stdio.h>

/* 
循环结构之三：do-while循环

1、凡是一个循环结构，都会包含如下的4个要素：
① 初始化条件
② 循环条件   ---> 一定是布尔类型的结果
③ 循环体
④ 迭代部分

2、do-while循环结构：

①
do{
    ③
    ④
}while(②);

执行过程：① - ③ - ④ - ② - ③ - ④ - ② - ... - ② 

3、说明：
do-while循环至少执行一次循环体

三种循环结构，可以相互转换！

 */
int main()
{
    //举例1：使用do-while替换前面讲过的使用for、while做的练习
    //遍历1-100之间的所有偶数，并计算偶数的个数和所有偶数的和

    int num = 1;

    int count = 0; //记录偶数的个数
    int sum = 0; //记录偶数的总和

    do{
        if(num % 2 == 0){
            printf("%d\n",num);
            count++;
            sum += num;
        }
        num++;

    }while(num <= 100);

    printf("偶数的个数为：%d\n",count);
    printf("偶数的总和为：%d\n",sum);

    return 0;
}