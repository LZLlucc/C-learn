#include <stdio.h>

int test(int m)
{
    m = m + 1;
    m = m + 2;
    m = m + 3;
    return m;
}

int main()
{

    int a,b,k;
    a = 10;
    b = 20;
    printf("a = %d,b = %d\n", a, b);

    k = test(10);
    printf("k = %d\n", k);

    return 0;
}