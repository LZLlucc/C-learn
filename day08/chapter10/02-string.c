#include <stdio.h>

/* 
1、字符串的表示： （一定以\0结束）

方式1：使用字符数组
方式2：使用字符指针

2、本质上，字符指针指向的字符串，底层仍然使用字符数组进行存储

3、使用字符数组 vs 使用字符指针
 */
int main(){
    //1、字符串的两种表示方式
    //方式1：使用字符数组 表示字符串 ""
    //情况1：
    char arr1[6] = {'h','e','l','l','o','\0'};
    char arr2[] = {'h','e','l','l','o','\0'};
    char arr3[10] = {'h','e','l','l','o'};
    //情况2：
    char arr4[6] = {"hello"};
    char arr5[] = {"hello"};
    char arr6[] = "hello";     //推荐写法

    printf("%s\n",arr6);

    //方式2：使用字符指针 表示字符串 ""
    char *str = "hello";
    printf("%s\n",str);

    //2、对比：使用字符数组 vs 使用字符指针
    char arr7[] = "hello";
    char *ptr1 = "tom";
    //① 类型不同
    //② 字符数组是一个常量，一旦赋值，就不可修改；字符指针，可以修改其指向的数据
    //arr7 = "world";  //不可修改

    printf("%s\n",ptr1);
    ptr1 = "Jerry";    //可以修改
    printf("%s\n",ptr1);

    //③ 针对于字符数组，可以通过角标的方式，修改具体索引位置的元素值
    arr7[0] = 'W';   //可以修改
    printf("%s\n",arr7);

    // 针对于字符指针，其保存的"Jerry"是一个字符串的字面量，此字面量是一个常量，此常量不可修改。
    //ptr1[1] = 'a';  //报错，不可以修改

    //证明：不同的字符指针，如果指向的是相同的字符串字面量，则在内存中共用
    char *ptr2 = "rose";
    char *ptr3 = "rose";
    printf("%s,地址为%p\n",ptr2,ptr2);
    printf("%s,地址为%p\n",ptr3,ptr3);
    
    return 0;
}