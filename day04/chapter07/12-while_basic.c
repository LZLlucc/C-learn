#include <stdio.h>

/* 

循环结构之二：while循环

1、凡是一个循环结构，都会包含如下的4个要素：
① 初始化条件
② 循环条件   ---> 一定是布尔类型的结果
③ 循环体
④ 迭代部分 

2、while循环的结构：

①
while(②)
{
    ③
    ④
}

执行过程：① - ② - ③ - ④ - ② - ③ - ④ - ... - ② 


3、说明
for循环和while循环是可以相互转换的！

二者的区别：初始化条件部分的作用域不同。

*/

int main()
{

    //遍历1-100之间的所有偶数，并计算偶数的个数和所有偶数的和
    int evenCount = 0; //记录偶数的个数
    int evenSum = 0;  //记录偶数的总和
    int j = 1;
    while(j <= 100){
        if(j % 2 == 0){
            printf("%d\n",j);
            evenCount++;
            evenSum += j;
        }

        j++;
    }

    printf("1-100之间偶数的个数为：%d\n",evenCount);
    printf("1-100之间偶数的总和为：%d\n",evenSum);

    printf("j = %d\n",j);

    return 0;
}