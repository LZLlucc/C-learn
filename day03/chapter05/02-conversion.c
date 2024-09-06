#include <stdio.h>

/*

运算规则1：自动类型转换（隐式转换）

1.1 窄类型自动转换为宽类型

公式：char 、short -> int -> long -> long long -> float -> double -> long double



说明：1、所有的基本数据类型都遵循此规则。
     2、此时指的窄类型、宽类型不是说各自占用的字节数的大小，而是具体数据类型表数范围的大小。
     3、特别的，char、short类型的变量作运算时，结果为int类型
     4、实际开发中，不建议让有符号的类型与无符号类型一起参与运算。
 */
int main()
{
    short s1 = 12;
    int i1 = 12;
    long long ll1 = 123ll;
    float f1 = 12.3f;
    double d1 = 12.3;
    long double ld1 = 12.3l;
    // 测试1：
    printf("short 和 int 运算后占用的字节数：%zu bytes\n", sizeof(s1 + i1));
    printf("int 和 long long 运算后占用的字节数：%zu bytes\n", sizeof(ll1 + i1));
    printf("long long 和 float 运算后占用的字节数：%zu bytes\n", sizeof(f1 + ll1));
    printf("int 和 long double 运算后占用的字节数：%zu bytes\n", sizeof(ld1 + i1));

    // 测试2：
    char c1 = 65;
    short s2 = 10;
    char c2 = 66;
    printf("short 和 char 运算后占用的字节数：%zu bytes\n", sizeof(s2 + c1));
    printf("short 和 short 运算后占用的字节数：%zu bytes\n", sizeof(s2 + s1));
    printf("char 和 char 运算后占用的字节数：%zu bytes\n", sizeof(c2 + c1));

    printf("占用的字节数是：%zu bytes\n", sizeof(c1));  // 1
    printf("占用的字节数是：%zu bytes\n", sizeof('A')); // 4

    // 测试3：
    int n2 = -100;
    unsigned int n3 = 20;
    // 负数转为无符号整数，两者绝对值的和是无符号整数的最大值再加 1。（不建议这样做）
    printf("%u \n", n2 + n3); // 4294967216

    return 0;
}