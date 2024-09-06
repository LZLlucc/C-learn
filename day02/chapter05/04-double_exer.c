#include <stdio.h>

/* 
有人用温度计测量出用华氏法表示的温度(如64°F），今要求把它转换为以摄氏法表示的温度
(如17.8℃)。转换的公式为：$c = \frac{5}{9}(f - 32)$。

其中，f 代表华氏温度，c 代表摄氏温度。

 */

int main(){

    double huaTemp,sheTemp;
    huaTemp = 64.0;

    sheTemp = 5.0 / 9 * (huaTemp - 32);
    printf("华氏温度%.2lf对应的摄氏温度为%.2lf\n",huaTemp,sheTemp);


    //练习：
    double d = 14 / 5;
    double d1 = 14.0 / 5;
    double d2 = (double)14 / 5;
    double d3 = (double)(14 / 5);
    printf("d = %lf\n",d);  //2.000000
    printf("d1 = %lf\n",d1);  //2.800000
    printf("d2 = %lf\n",d2);  //2.800000
    printf("d3 = %lf\n",d3);  //2.000000

    return 0;
}