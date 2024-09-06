
#include <stdio.h>

/* 
不同进制的表示

十进制（decimal）
  - 数字组成：0-9
  - 进位规则：满十进一
  - C 语言的整数默认都是十进制数

二进制（binary）
  - 数字组成：0-1
  - 进位规则：满二进一，以`0b`或`0B`开头


八进制（octal）：很少使用
- 数字组成：0-7
- 进位规则：满八进一，以数字`0`开头表示


十六进制
- 数字组成：0-9，a-f
- 进位规则：满十六进一，以`0x`或`0X`开头表示。此处的 a-f 不区分大小写

 */

int main()
{

    //系统默认的是：十进制
    int num1 = 10;
    //显式的声明二进制
    int num2 = 0b10;

    //声明八进制
    int num3 = 010;

    //声明十六进制
    int num4 = 0x10a;

    // %d:表示十进制的int类型
    printf("num1 = %d\n",num1);    // 10 
    printf("num2 = %d\n",num2);    // 2
    printf("num3 = %d\n",num3);    // 8
    printf("num4 = %d\n",num4);    //266

    return 0;
}