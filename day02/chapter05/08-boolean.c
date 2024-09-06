#include <stdio.h>

#include <stdbool.h>

// 方式4：使用c99语法中提供的<stdbool.h>头文件。其中使用bool替换_Bool，使用true替换1，
//        使用false替换0.

int main()
{

    bool isOk = true;

    isOk = false;

    if (isOk)
    {
        printf("我是美猴王\n");
    }
    else
    {
        printf("我是马喽~~\n");
    }

    return 0;
}