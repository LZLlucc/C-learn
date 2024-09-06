#include <stdio.h>
#include <stdlib.h>
/* 
函数的定义

1、函数的声明格式：

返回值类型  函数名(参数类型1 参数1,参数类型2 参数2,...)
{
    函数体
}

2、具体展开说明：

2.1 返回值类型：一个函数在调用完以后，是否需要返回一个数据，如果需要返回数据，则在此指明此数据的类型。
    分为两类：
        不需要返回值：使用 void 声明。
                比如：结束程序执行的函数：void exit(int status)；对数组进行快速排序的函数：void qsort(...) 
        需要返回值：指明具体的返回值的类型。比如：int \float \ double \ int * \ char * \ int[]等
                比如：取数值的平方根：double sqrt(double d)；获取字符串的长度：size_t strlen(str)
        
    通常，需要返回值的函数，内部使用return关键字，用于数据的返回。


2.2 函数名: 用于区分不同的函数的。属于标识符，需要定义时满足标识符声明的规则！
            "见名知意"


2.3 参数列表：函数在执行过程中，需要的额外的数据。
    分为两类：
        不需要额外的参数：空参。此时只需要使用一对()表示即可 
                比如：abort()：立即终止程序的执行，不接受任何形参；rand() ：获取一个0-RAND_MAX范围的随机数 
        需要额外的参数：多个参数之间使用,隔开  
                比如：add(int m,int n)，strcmp(const char *str1, const char *str2)

2.4 函数体: 调用函数时，实际执行的代码。


3、说明：
函数不调用不执行。调用一次就执行一次。
函数不可以嵌套声明


4、形参 vs 实参：
    形参：即形式参数，函数在声明时，参数列表中的变量都称为形参。
    实参：即在调用此函数时，实际给形参赋的值，即为实参。


5、实参给形参赋值时，要求：实参的个数必须与形参的个数相同；实参的类型要与形参的类型匹配（要么相同，要么存在自动类型转换）    
 */

//需求：定义函数printHello()，输出“Hello” ，定义函数getRandomNumber()，返回一个0-100以内的随机数。

void printHello(){
    printf("hello");
}

int getRandomNumber(){
    int random_num = rand() % 100;
    return random_num;

}

//定义函数print()，打印5行6列的*型矩形；定义函数printGraph(int m,int n)，打印m行n列的*型矩形

void print(){
    for(int i = 1;i <= 5;i++){
        for(int j = 1;j <= 6;j++){
            printf("* ");
        }
        printf("\n");
    }
}

void printGraph(int m,int n){
    for(int i = 1;i <= m;i++){
        for(int j = 1;j <= n;j++){
            printf("* ");
        }
        printf("\n");
    }
}

//函数不可以嵌套声明
// void fun1(){

//     void fun2(){

//     }


// }


int main()
{
    print();
    //print();

    printf("\n");

    int a = 4;
    int b = 10;

    printGraph(a,b);  //a,b作为实参，将其值赋给形参m,n

    return 0;
}