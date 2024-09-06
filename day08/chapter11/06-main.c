#include <stdio.h>
/* 

main()的理解：


1、main()作为程序的入口

2、main()函数中可以调用其他的函数，其他的函数中不能调用main()；main()中也不会自己调用自己.

3、main()的返回值的理解： 
    return 0 ： 表示程序能正常运行结束； 返回值如果是非零，表示程序执行错误。
    如果声明main()时，最后忘了写return 0.则默认也是存在的。

4、main的古老写法：
void main(){

}

5、main()的另外写法：
int main(int argc,char *argv[])

参数1：argc,argument count,记录参数的个数，即为第2个参数中数组元素的个数
参数2：argv,argument variable,即为一个字符串数组。


 */
int main(int argc,char *argv[]){

    printf("varible count : %d\n",argc);

    for(int i = 0;i < argc;i++){
        printf("argv[%d] = %s\n",i,argv[i]);
    }

    return 0;
}