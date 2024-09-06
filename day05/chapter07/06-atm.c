#include <stdio.h>

int main(){

    int selection ;
    int flag = 1; //用于控制循环结束的标识

    while(flag){

        printf("=========ATM========\n");
        printf("\t1、存款\n");
        printf("\t2、取款\n");
        printf("\t3、显示余额\n");
        printf("\t4、退出\n");
        printf("请选择(1-4)：");

        scanf("%d",&selection);

        switch(selection){
            case 1:
                //存款
                break;
            case 2:
                //取款
                break;
            case 3:
                //显示余额
                break;
            case 4:
                //退出
                flag = 0;
                break;
        }
        //....
    }

    //...
}