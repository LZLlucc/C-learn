#include <stdio.h>

/*
分支结构之2：switch-case

1、结构：
switch(表达式){

case 常量1:
    语句块1;
    //break;
case 常量2:
    语句块2;
    //break;
...
case 常量n:
    语句块n;
    //break;
default:
    语句块n+1;
    //break;
}

2、说明:
2.1 执行过程：
第1步：根据switch中表达式的值，依次匹配各个case。如果表达式的值等于某个case中的常量值，则执行对应case中的执行语句。

第2步：执行完此case的执行语句以后，
​       情况1：如果遇到break，则执行break并跳出当前的switch-case结构
​		情况2：如果没有遇到break，则会继续执行当前case之后的其它case中的执行语句。--->case穿透
​		       ...
​		      直到遇到break或执行完所有的case及default的执行语句，跳出当前的switch-case结构。

2.2 switch-case结构中的break是可选的，根据题目要求进行添加

2.3 switch后面的表达式可以是如下的数据类型：char \ short \ int \ long \ 枚举类型（后面讲）

2.4 default，类似于if-else结构中的else,default也是可选的，且位置是灵活的。
 */
int main()
{
    int num = 1;
    num = 5;
    switch (num)
    {
    // default:
    //     printf("other\n");
    case 0:
        printf("zero\n");
        break;
    case 1:
        printf("one\n");
        break;
    case 2:
        printf("two\n");
        break;
    case 3:
        printf("three\n");
        break;
    default:
        printf("other\n");
        //break;
    }


    return 0;
}