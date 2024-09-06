#include <stdio.h>
/*
输入油号（92或95）和油量，计算需要支付的金额。92号汽油每升4元，
如果油量大于等于40升，每升3.5元；95号汽油每升5元，如果油量大于等于40升，每升4.5元。
 */
int main()
{

    int oil_number;
    double oil_capacity;

    printf("请输入油号(92/95)：");
    scanf("%d", &oil_number);

    printf("请输入油量(升)：");
    scanf("%lf", &oil_capacity);

    double oil_price;

    switch (oil_number)
    {
    case 92:
        if (oil_capacity >= 40)
            oil_price = 3.5;
        else
            oil_price = 4;
        break;
    case 95:
        if (oil_capacity >= 40)
            oil_price = 4.5;
        else
            oil_price = 5;
        break;
    default:
        printf("你输入的油号有误\n");
    }

    double oil_sum_money = oil_capacity * oil_price;
    printf("%d号汽油%.2lf升的总价格为：%.2lf\n", oil_number, oil_capacity, oil_sum_money);

    return 0;
}