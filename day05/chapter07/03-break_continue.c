#include <stdio.h>
/* 

break和continue的使用

            使用范围                  在循环中使用的作用                      相同点
break       switch-case选择结构
            循环结构                   一旦执行，就跳出(或结束)当前循环        此关键字后不要声明执行语句  

continue    循环结构                   一旦执行，就跳出(或结束)当次循环        此关键字后不要声明执行语句 


从开发使用的频率上来说，break的使用频率要远高于continue
 */
int main()
{

    //在单层循环中：
    // for(int i = 1;i <= 10;i++){
    //     if(i % 4 == 0){
    //         //break;
    //         continue;
    //     }
    //     printf("%d\t",i);
    // }
    //break: 1   2   3
    //continue:1   2   3   5   6   7   9  10  


    //在嵌套循环中：
    for(int i = 1;i <= 4;i++){
        for(int j = 1;j <= 10;j++){
            if(j % 4 == 0){
                // break;  //结束包裹此关键字最近的一层循环结构
                continue;  //结束包裹此关键字最近的一层循环结构的当次循环

                //此处的执行语句一定不会被执行
                //printf("今晚迪丽热巴要约我~~~");
            }
            printf("%d\t",j);
        }
        printf("\n");
    }
    //break: 1  2  3 换行 1  2  3  换行 1  2  3  换行 1  2  3  
    //continue: 1  2  3  5  6  7  9  10 换行 ... 
    return 0;
}