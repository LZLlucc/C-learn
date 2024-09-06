#include <stdio.h>

/* 

定义函数，要求字符串作函数参数，统计数字字符出现的个数。
 */

int get_string_number_count(char *ptr_str){   //'0'  --> '9'
    int count = 0;
    for(;*ptr_str != '\0';ptr_str++){
        if(*ptr_str >= '0' && *ptr_str <= '9'){
            count++;
        }
    }

    return count;
}

int main(){

    char *info = "hel23l123owo54rl65d88";

    int count = get_string_number_count(info);

    printf("%s中出现的数字字符的个数为：%d\n",info,count);

    return 0;
}