#include <stdio.h>

/* 
二维数组的遍历 ，使用指针等结构

 */
int main()
{
    int a[4][5] = {
        {11, 12, 13, 14, 15},
        {16, 17, 18, 19, 20},
        {21, 22, 23, 24, 25},
        {26, 27, 28, 29, 30}};

    //方式1：使用下标法表示：a[i][j]
    printf("通过数组名表示二维数组的元素地址:\n");
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            printf("%p  ", &a[i][j]);
        }
        printf("\n");
    }

    printf("通过数组名表示二维数组的元素值:\n");
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }

    printf("下标为2,3的元素地址:%p\n", &a[2][3]);
    printf("下标为2,3的元素值:%d\n", a[2][3]);

    //方式2：使用二维数组表示   i,j 对应的元素值：  *(*(a + i) + j)
    printf("通过数组名表示二维数组的元素地址:\n");
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            printf("%p  ", *(a + i) + j);
        }
        printf("\n");
    }

    printf("通过数组名表示二维数组的元素值:\n");
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            printf("%d\t", *(*(a + i) + j));
        }
        printf("\n");
    }

    //方式3：使用一维数组表示   i,j 对应的元素值：  *(a[i] + j)
    printf("通过数组名表示二维数组的元素地址:\n");
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            printf("%p\t", a[i] + j);
        }
        printf("\n");
    }

    printf("通过数组名表示二维数组的元素值:\n");
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            printf("%d\t", *(a[i] + j));
        }
        printf("\n");
    }

    return 0;
}