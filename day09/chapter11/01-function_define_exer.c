#include <stdio.h>

/*


 */
// 函数：getWeekName
// 描述：根据输入的星期数，返回相应的星期名称
// 参数：week - 代表星期的整数（1表示星期一，7表示星期日）
// 返回值：返回表示星期名称的字符串，如果输入无效则返回空字符串
char *getWeekName(int week)
{
    switch (week)
    {
    case 1:
        return "Monday";

    case 2:
        return "Tuesday";

    case 3:
        return "Wednesday";

    case 4:
        return "Thursday";

    case 5:
        return "Friday";

    case 6:
        return "Saturday";

    case 7:
        return "Sunday";

    }

    return "";
}

// 函数：getMonthName
// 描述：根据输入的月份数，返回相应的月份名称
// 参数：month - 代表月份的整数（1表示一月，12表示十二月）
// 返回值：返回表示月份名称的字符串，如果输入无效则返回空字符串
char *getMonthName(int month)
{
    char *month_arr[12] = {"一月","二月","三月","四月","五月","六月","七月","八月","九月","十月","十一月","十二月"};
    if(month >= 1 && month <= 12){
        return month_arr[month - 1];
    }

    return ""; 

}

// 函数：isLeapYear
// 描述：检查输入的年份是否为闰年
// 参数：year - 待检查的年份
// 返回值：如果是闰年则返回1，否则返回0，如果输入为负数则返回-1作为错误标志
// 提示：能被4整除但不能被100整除，或者能被400整除的年份，即为闰年。
int isLeapYear(int year)
{
    if(year >= 0){
        return (year % 4 == 0 && year % 100 != 0) || year % 400 == 0;
    }
    return -1;
}

// 函数：getTotalDaysOfMonth
// 描述：获取指定年份和月份的总天数
// 参数：year - 年份，month - 月份
// 返回值：返回该月份的总天数，如果输入无效则返回-1作为错误标志
int getTotalDaysOfMonth(int year, int month)
{
    int month_day[12] = {31,28,31,30,31,30,31,31,30,31,30,31};

    if(year >= 0 && month >= 1 && month <= 12){
        //方式1：
        // if(isLeapYear(year)){
        //     month_day[1]++;
        // }
        
        // return month_day[month - 1];

        //方式2：
        if(month == 2){
            if(isLeapYear(year)){
                month_day[1]++;
            }
            return month_day[1];
        }
        return month_day[month - 1];

    }

    return -1;
}

// 函数：getTotalDaysOfYear
// 描述：获取指定年份的总天数
// 参数：year - 年份
// 返回值：返回该年份的总天数，如果输入无效则返回-1作为错误标志
int getTotalDaysOfYear(int year)
{
    if(year >= 0){
        if(isLeapYear(year)){
            return 366;
        }
        return 365;
    }
    return -1;
}

int main()
{
    
    return 0;
}