#include <stdio.h>

/* 
体会 while(1) 和 for(;;) 结构的使用


练习：从键盘读入个数不确定的整数，并判断读入的正数和负数的个数，输入为0时结束程序。
 */
int main(){

    // for (;;) {
    //     printf("我爱你！\n");
    // }
    //printf("end...");  //没有机会执行

    int num; 
    int positive_nums = 0; //记录正数的个数
    int negative_nums = 0; //记录负数的个数

    for(;;){//while(1){
        printf("请输入一个整数(输入0时结束程序)：");
        scanf("%d",&num);

        if(num > 0){
            positive_nums++;
        }else if(num < 0){
            negative_nums++;
        }else{
            break;
        }

    }
    
    printf("程序结束\n");
    printf("正数的个数为：%d\n负数的个数为：%d\n",positive_nums,negative_nums);



    
    

    return 0;
}