#include <stdio.h>
/* 
标识符的使用

1、理解标识符：凡是可以自己起名字的地方，都叫标识符。比如：变量名、常量名、函数名、结构体名、数组名等

2、强制规则：大家在声明标识符时，必须遵守。否则，运行报错！
（1）只能由小写或大写英文字母，0-9 或 _ 组成
（2）不能以数字开头
（3）不可以是关键字，但可以包含关键字
（4）标识符具有长度限制，不同编译器和平台会有所不同，一般限制在63个字符内
（5）不允许有空格
（6）严格区分大小写字母。比如：Hello、hello是不同的标识符

3、建议规范：如果声明标识符时，不遵守此规范，也不影响程序的编译和运行。但是建议大家遵守。
（1）为了提高阅读性，使用有意义的单词，见名知意，如：sum，name，max，year等。
（2）不要出现仅靠大小写区分不同的标识符，如：name、Name容易混淆。
（3）尽量避免名字中出现数字编号，如value1、value2等，除非逻辑上需要编号。
（4）使用下划线连接多个单词组成的标识符，如：max_classes_per_student。
（5）多个单词组成的标识符，除了使用下划线连接，也可以使用小驼峰命名法，除第一个单词外，
     后续单词的首字母大写，如 maxClassesPerStudent、myVariableName、studentAge。
（6）系统内部使用了一些下划线开头的标识符，比如，C99标准添加的类型 `_Bool`，为防止冲突，建议开发者尽量避免使用下划线开头的标识符。
（7）对于一些常量，习惯上全用大写字母命名，用下划线分隔单词，方便与变量区分。比如： const double TAX_RATE = 0.08; //TAX_RATE 只读变量。




 */
int main()
{
    int num_01 = 10;

    //int 01_num = 10; //错误

    int _01num = 10;

    //int double = 10;  //错误

    int double1 = 10;

    //在程序中，如下的A和a是不同的变量，但是在实际开发中，不建议仅从大小写方向区别不同的变量。
    int A = 10;
    int a = 20;

    printf("A = %d,a = %d\n",A,a);

    return 0;
}