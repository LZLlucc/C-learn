
#include <stdio.h>
#include <stdint.h>
/*
测试 <stdint.h>头文件中关于整型的新类型的声明

 */

int main()
{
    int32_t i = 10;  //此时的变量i在内存中使用4个字节存储

    uint32_t j = 32u; //此时的变量j在内存中使用4个字节存储

    printf("int32_t 占用的字节数为：%zu bytes\n",sizeof(int32_t));
    printf("int64_t 占用的字节数为：%zu bytes\n",sizeof(int64_t));

    return 0;
}