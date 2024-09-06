#include <stdio.h>
/*
定义函数dualMax()，求两个double型变量的最大值；定义函数triMax()，求三个double型变量的最大值
 */

double dualMax(double d1, double d2)
{
    return (d1 > d2) ? d1 : d2;
}

// void dualMax(double d1,double d2){
//     double max = (d1 > d2) ? d1 : d2;
//     printf("max = %.2lf\n",max);
// }

double triMax(double d1, double d2, double d3)
{
    return (dualMax(d1,d2) > d3)? dualMax(d1,d2) : d3;  //函数之间可以相互调用（除了main()）
}

int main()
{

    // dualMax(10.2,4.5);

    double max = dualMax(10.2, 4.5);
    printf("max = %.2lf\n", max);

    double max1 = triMax(34.5,6.4,77.5);
    printf("max1 = %.2lf\n", max1);

    return 0;
}