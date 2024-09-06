#include <stdio.h>
#include <string.h>

/*
指针函数的使用


1、当一个函数的返回值是一个指针时，则称此函数指针函数

2、格式：
返回值类型 *函数名(形参列表) {
    函数体;
    return 地址;
｝

3、例题


 */
// 练习1：获取两个字符串中较长的那个字符串
char *get_max_string(char *str1, char *str2)
{

    if(strlen(str1) > strlen(str2)){
        return str1;
    }

    return str2;

}
//练习2：拓展：编写函数char *maxLen (char *arr[],int n)，
//用于查找多个字符串中的最长字符串，并返回该字符串的地址。
char * maxLen(char *arr[],int n){

    int max = strlen(arr[0]); //将第1个字符串的长度记录在max中
    int position = 0;  //记录长度最大的字符串的位置

    for(int i = 0;i < n;i++){

        if(max < strlen(arr[i])){
            max = strlen(arr[i]);
            position = i;
        }
    }
    return arr[position];
}

int main()
{
    char *str1 = "hello123";
    char *str2 = "jerry";

    char *max_str = get_max_string(str1,str2);
    printf("%s\n",max_str);


    char *arr[] = {"beijing","shenzhen","shanghai","chengdu","changan"};
    char *max_str1 = maxLen(arr,5);
    printf("最长的字符串是：%s\n",max_str1);

    return 0;
}