#include <stdio.h>

int main()
{

    char arr[10];
    scanf("%s", arr); // arr前没必要加&了
    // scanf("%s", &arr); // arr前没必要加&了

    puts(arr); // 输出此字符串

    return 0;
}