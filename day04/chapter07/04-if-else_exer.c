#include <stdio.h>

/* 
根据淡旺季的月份和年龄，打印票价。要求，月份和年龄从键盘获取输入。

4_10 旺季：
	成人（18-60）：60
	儿童（< 18）   :  半价
	老人（> 60）   :  1/3
淡季：
	成人（> 18）   :  40
	其他   :  20
 */
int main(){

    //1、获取月份和年龄
    int month,age; 
    printf("请输入月份：");
    scanf("%d",&month);

    printf("请输入年龄：");
    scanf("%d",&age);

    //2、声明price变量，表示票价
    double price = 60;

    //3、根据月份和年龄，给票价赋值
    if(month >= 4 && month <= 10){  //旺季
        // if(age >= 18 && age <= 60){
        //     price = 60; //自动类型提升
        // }else if( age < 18){
        //     price = 60 / 2;
        // }else{
        //     price = 60 / 3;
        // }

        if(age < 18){
            price /= 2;
        }else if(age > 60){
            price /= 3;
        }
    }else{  //淡季
        if(age >= 18){
            price = 40;
        }else{
            price = 20;
        }
    }

    //4、打印最终的票价
    printf("%d月%d岁的票价为%.2lf元\n",month,age,price);


    return 0;
}