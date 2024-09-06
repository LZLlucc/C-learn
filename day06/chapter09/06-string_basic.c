#include <stdio.h>
#include <string.h>

//字符串的基本使用

int main()
{   
    //② 调用指定索引位置的元素：获取、修改
    char str1[7] = {'h','e','l','l','o','\0','\0'};
    char str2[5] = "tom"; 
    //获取
    char c = str1[0];
    printf("%c\n",c); //h
    //修改
    str1[0] = 'w';
    printf("str1 = %s\n",str1); //wello

    str2[0] = 'T';
    printf("str2 = %s\n",str2); //Tom

    //③ 关于长度：数组的长度、字符串的长度
    printf("str1数组的长度为：%zu,字符串的长度为：%zu\n",sizeof str1,strlen(str1)); //7   5
    printf("str2数组的长度为：%zu,字符串的长度为：%zu\n",sizeof str2,strlen(str2)); //5   3

    //④ 遍历
    printf("%s\n",str1);  //hello

    //遍历字符数组(很少用)
    int arr1_len = sizeof str1;
    for(int i = 0;i < arr1_len;i++){
        printf("%c\t",str1[i]);
    }
    printf("\n");

    //遍历字符串中每个字符(很少用)
    int str1_len = strlen(str1);
    for(int i = 0;i < str1_len;i++){
        printf("%c\t",str1[i]);
    }
    printf("\n");

    return 0;
}