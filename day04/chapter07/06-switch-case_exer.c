#include <stdio.h>

/* 
练习:使用switch-case实现：对学生成绩大于60分的，输出“合格”。低于60分的，输出“不合格”。
 */
int main()
{
    int score = 67;
    //方式1：哭死。。。
    // switch(score){
    //     case 0:
    //         printf("不及格\n");
    //         break;
    //     case 1:
    //         printf("不及格\n");
    //         break;
    //     //...

    //     case 100:
    //         printf("及格\n");
    //         break;
    
    //     default:
    //         printf("你输入的成绩非法！\n");
    // }

    //方式2：case中不能书写范围。错误！
    // switch(score){
    //     case score < 60 : 
    //         printf("不及格\n");
    //         break;
    //     case score >= 60:
    //         printf("及格\n");
    //         break;
    // }

    //方式3：体会case穿透
    switch(score / 10){
        case 0:
        case 1:
        case 2:
        case 3:
        case 4:
        case 5:
            printf("不及格\n");
            break;
        case 6:
        case 7:
        case 8:
        case 9:
        case 10:
            printf("及格\n");
            break;
        default:
            printf("你输入的成绩非法！\n");
    }

    //写法4：
    switch(score / 60){
        case 0:
            printf("不及格\n");
            break;
        case 1:
            printf("及格\n");
            break;
        default:
            printf("你输入的成绩非法！\n");
    }

    return 0;
}