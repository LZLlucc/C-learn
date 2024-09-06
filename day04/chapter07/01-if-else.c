#include <stdio.h>

/*
需求：
    岳小鹏参加C语言考试，他和父亲岳不群达成承诺：
    如果：
    成绩为100分时，奖励一辆跑车；
    成绩为(80，99]时，奖励一辆山地自行车；
    当成绩为[60,80]时，奖励环球影城一日游；
    其它时，胖揍一顿。

    说明：默认成绩是在[0,100]范围内

知识点1说明：
     如果条件表达式彼此之间是"互斥"关系，则哪个条件表达式写在上面，哪个条件表达式写在下面都可以。
     如果条件表达式彼此之间是"包含"关系，通常把范围小的条件表达式写在范围大的条件表达式的上面。

知识点2说明：如果条件表达式对应的执行语句块中只有一行执行语句，则可以省略这一对{}。
            但是不建议大家编写时省略。

知识点3说明：else结构题目的要求，可以省略。---> else是可选的。

 */
int main()
{
    int score = 78;

    // 写法1：
    if (score == 100)
    {
        printf("奖励一辆跑车\n");
    }
    // 错误写法：else if (80 < score <= 99)
    else if (score > 80 && score <= 99)
    {
        printf("奖励一辆山地自行车\n");
    }
    else if (score >= 60 && score <= 80)
    {
        printf("奖励环球影城一日游\n");
    }
    else
    {
        printf("胖揍一顿\n");
    }

    // 写法2：
    if (score == 100)
    {
        printf("奖励一辆跑车\n");
    }
    else if (score > 80)
    {
        printf("奖励一辆山地自行车\n");
    }
    else if (score >= 60)
    {
        printf("奖励环球影城一日游\n");
    }
    else
    {
        printf("胖揍一顿\n");
    }

    // 写法3：
    if (score == 100)
        printf("奖励一辆跑车\n");
    else if (score >= 60 && score <= 80){
        printf("奖励环球影城一日游\n");
    
        printf("奖励环球影城一日游\n");
    }else if (score > 80 && score <= 99)
        printf("奖励一辆山地自行车\n");
    // else
    //     printf("胖揍一顿\n");

    // 写法4：不满足题面要求
    //  if (score == 100)
    //  {
    //      printf("奖励一辆跑车\n");
    //  }
    //  else if (score >= 60)
    //  {
    //      printf("奖励环球影城一日游\n");
    //  }
    //  else if (score > 80)
    //  {
    //      printf("奖励一辆山地自行车\n");
    //  }
    //  else
    //  {
    //      printf("胖揍一顿\n");
    //  }

    return 0;
}