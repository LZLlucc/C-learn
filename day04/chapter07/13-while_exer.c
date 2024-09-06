#include <stdio.h>

/*
世界最高山峰是珠穆朗玛峰，它的高度是8848.86米，假如我有一张足够大的纸，它的厚度是0.1毫米。
请问，我折叠多少次，可以折成珠穆朗玛峰的高度?

 */

int main()
{
    double paper_hight = 0.1; //单位：毫米
    int zf_hight = 8848860; //单位：毫米

    int count = 0; //记录折纸的次数

    while(paper_hight < zf_hight){   //while(1)   for(;;)

        paper_hight *= 2;
        count++;

    }

    printf("共折纸%d次\n",count);
    printf("此时的纸的厚度为：%.2lf 米\n",paper_hight / 1000);

    return 0;
}