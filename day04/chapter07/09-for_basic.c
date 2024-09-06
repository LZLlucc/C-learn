#include <stdio.h>

/* 
循环结构之一：for循环

1、凡是一个循环结构，都会包含如下的4个要素：
① 初始化条件
② 循环条件   ---> 一定是布尔类型的结果
③ 循环体
④ 迭代部分

2、for循环的结构

for(①;②;④){
    ③
}

执行过程：① - ② - ③ - ④ - ② - ③ - ④ - ... - ②

 */
int main()
{

    //举例1:输出5行helloworld
    // printf("helloworld\n");
    // printf("helloworld\n");
    // printf("helloworld\n");
    // printf("helloworld\n");
    // printf("helloworld\n");

    //
    for(int i = 1;i <= 5;i++){   //h..h..h..h..h..
        printf("helloworld\n");
    }
    //超出了i的作用域，失效了
    //printf("i = %d\n",i);

    //举例2：输出结果：abcbcbc
    int i = 1;
    for(printf("a");i <= 3;printf("c"),i++){
        printf("b");
    }
    printf("\n");
    //举例3：遍历1-100之间的所有偶数，并计算偶数的个数和所有偶数的和
    int evenCount = 0; //记录偶数的个数
    int evenSum = 0;  //记录偶数的总和
    for(int j = 1;j <= 100;j++){
        if(j % 2 == 0){
            printf("%d\n",j);
            evenCount++;
            evenSum += j;
        }
    }

    printf("1-100之间偶数的个数为：%d\n",evenCount);
    printf("1-100之间偶数的总和为：%d\n",evenSum);

    return 0;
}