#include <stdio.h>
/* 
函数指针的使用

1、概念：指向函数首地址的指针。

2、声明格式：返回值类型 (*指针变量名)(参数列表); 


3、

 */
//举例1：定义如下函数的函数指针
void print1(){
    printf("hello\n");
}

void print2(char *info){
    printf("hello,%s\n",info);
}

int print3(int num){
    printf("hello,%d\n",num);
    return num;
}



int main(){
    //函数指针的使用
    //以调用print1()为例说明
    //1、声明函数指针变量
    void (*ptr_print1)();
    //2、函数指针的赋值
    ptr_print1 = &print1;  
    //也可以写为：ptr_print1 = print1;
    //3、通过函数指针调用对应的函数
    //方式1：
    (*ptr_print1)();  //理解为：对应着34行代码
    //方式2：
    ptr_print1();     //理解为：对应着35行代码

    //测试：
    void (*ptr_print1_1)();
    ptr_print1_1 = print1;
    printf("%p\n",ptr_print1); //00007ff7e2d914a4
    printf("%p\n",ptr_print1_1); //00007ff7e2d914a4

    //#####################################################
    void (*ptr_print2)(char *) = print2;
    ptr_print2("Tom");  //通过函数指针调用print2函数


    int (*ptr_print3)(int) = print3;
    (*ptr_print3)(10); 

    return 0;
}