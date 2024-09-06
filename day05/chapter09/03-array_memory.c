#include <stdio.h>

/* 
一维数组的内存分析

1、数组元素的地址的理解

2、数组名是常量


说明：内存地址的输出，对应的占位符是：%p
 */
int main(){
    //测试1：数组元素的地址的理解
    int arr1[5] = {1,2,3,4,5};

    printf("arr1的地址：%p\n",arr1);  //arr1保存的就是首元素的地址！

    printf("arr1[0]的地址：%p\n",&arr1[0]);  //联想：scanf("%d",&num);
    printf("arr1[1]的地址：%p\n",&arr1[1]);  
    printf("arr1[2]的地址：%p\n",&arr1[2]);  
    printf("arr1[3]的地址：%p\n",&arr1[3]);  
    printf("arr1[4]的地址：%p\n",&arr1[4]);

    printf("\n");

    double arr2[5];

    printf("arr2的地址：%p\n",arr2);  //arr2保存的就是首元素的地址！

    printf("arr2[0]的地址：%p\n",&arr2[0]);  //联想：scanf("%d",&num);
    printf("arr2[1]的地址：%p\n",&arr2[1]);  
    printf("arr2[2]的地址：%p\n",&arr2[2]);  
    printf("arr2[3]的地址：%p\n",&arr2[3]);  
    printf("arr2[4]的地址：%p\n",&arr2[4]);

    //测试2：数组名是常量
    //错误演示1：
    int arr3[5] = {1,2,3,4,5};
    //arr3 = {10,20,30,40,50};

    //错误演示2：
    int arr4[5];   //一旦定义了数组，开辟了4 * 5 = 20个字节的内存空间，并将此空间的首地址赋给arr4。此arr4是常量
    printf("arr4的地址为：%p\n",arr4);
    //arr4 = {10,20,30,40,50};

    //错误演示3：
    int arr5[5] = {10,20,30,40,50};
    int arr6[5];
    //arr6 = arr5;

    //错误演示4：
    int arr7[5] = {10,20,30,40,50};
    //int arr8[5] = arr7;

    //错误演示5：
    int arr9[5];
    //arr9 = NULL;

    return 0;
}