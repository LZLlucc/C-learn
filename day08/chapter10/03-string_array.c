#include <stdio.h>
/* 

字符串数组的使用：

表示方式：① 使用二维字符数组  ② 使用字符指针数组

练习：存储多个字符串："Monday","Tuesday","Wednesday","Thursday","Friday","Saturday","Sunday"，并使用循环遍历
 */
int main(){

    //使用二维字符数组
    char week1[7][10] = {"Monday","Tuesday","Wednesday","Thursday","Friday","Saturday","Sunday"};  //7可以省略


    //使用字符指针数组
    char *week2[7] = {"Monday","Tuesday","Wednesday","Thursday","Friday","Saturday","Sunday"};


    //遍历
    for(int i = 0;i < 7;i++){
        printf("%s\n",week1[i]);
    }

    printf("\n");
    for(int i = 0;i < 7;i++){
        printf("%s\n",week2[i]);
    }

    return 0;

}