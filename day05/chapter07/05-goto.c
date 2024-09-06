#include <stdio.h>

/* 
    录入学生成绩，并计算学生的平均分。当输入-1时程序结束。

 */

int main(){

    int score; //记录成绩
    double sum_scores = 0; //记录总分
    int count = 0 ;  //记录学生人数
la_input_score:
    printf("请输入学生成绩:");
    scanf("%d",&score);

    if(score != -1){
         sum_scores += score;
         count++;  
         goto la_input_score; 
    }

    //程序到此：
    if(count != 0){
        double avg_score = sum_scores / count;
        printf("平均成绩为：%.2lf\n",avg_score);    
    }
    

    return 0;
}