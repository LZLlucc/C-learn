#include <stdio.h>
#define N 10
/* 

使用二维数组打印一个 10 行杨辉三角。

提示：
1. 第一行有 1 个元素, 第 n 行有 n 个元素
2. 每一行的第一个元素和最后一个元素都是 1
3. 从第三行开始, 对于非第一个元素和最后一个元素的元素。

 */
int main()
{   
    //定义二维数组
    int yang_hui[N][N];

    //给数组的元素赋值
    for(int i = 0;i < N;i++){
        //① 给每i行的收尾元素赋值
        yang_hui[i][0] = 1;
        yang_hui[i][i] = 1;
        for(int j = 1;j < i;j++){
            yang_hui[i][j] = yang_hui[i - 1][j] + yang_hui[i - 1][j - 1];
        }
    }

    //遍历数组
    for(int i = 0;i < N;i++){
        for(int j = 0;j <= i;j++){
            printf("%d\t",yang_hui[i][j]);
        }
        printf("\n");
    }


    return 0;
}
