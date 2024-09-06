#include <stdio.h>

/*
分支结构之1：if-else

1、三种结构：
第1种：

if(条件表达式)
{
    语句块;
}


第2种：二选一

if(条件表达式)
{
    语句块1;
}
else
{
    语句块2;
}

第3种：多选一

if(条件表达式1)
{
    语句块1;
}
else if(条件表达式2)
{
    语句块2;
}
else if(条件表达式3)
{
    语句块3;
}
...

else
{
    语句块n;
}


 */
int main()
{

    // 体会结构1：
    int heartBeats = 89; // 60 -  100
    if (heartBeats < 60 || heartBeats > 100)
    {
        printf("你需要做进一步的体检\n");
    }

    printf("体检结束\n");

    // 体会结构2: 二选一
    int num = 34;
    if (num % 2 == 0)
    {
        printf("%d是偶数", num);
    }
    else
    {
        printf("%d是奇数", num);
    }

    return 0;
}