#include <stdio.h>

int main()
{
    //1、针对如下代码，遍历数组
    int arr[5] = {10, 20, 30, 40, 50};
    const int LEN = 5;

    //方式1：数组名+角标
    for(int i = 0;i < LEN;i++){
        printf("%d\n",arr[i]);
    }

    //方式2：数组名+偏移量
    for(int i = 0;i < LEN;i++){
        printf("%d\n",*(arr + i));
    }

    //方式3：指针+偏移量
    int *ptr = arr;  //int *ptr = &arr[0];
    for(int i = 0;i < LEN;i++){
        printf("%d\n",*(ptr + i));
    }

    //方式4：指针++
    int *ptr1;
    for(ptr1 = arr;ptr1 < arr + LEN;ptr1++){
       printf("%d\n",*ptr1);     
    }

    //方式5：指针+角标
    int *ptr2 = arr;
    for(int i = 0;i < LEN;i++){
        printf("%d\n",ptr2[i]);
    }

    //2、说明上述代码中，arr 、&arr[0]、&arr 三者在输出地址、+1操作、sizeof上的区别
    /*
    三者在输出地址:
        arr:    数组首元素的地址
        &arr[0] :  数组首元素的地址
        &arr :  数组的首地址
    
    +1操作：
        arr:     下一个元素的地址，即角标为1的元素的地址
        &arr[0] : 下一个元素的地址，即角标为1的元素的地址
        &arr :    整个数组结束后的下一个字节的地址

    sizeof ： 
        arr:      数组整体占用的字节数
        &arr[0] : 指针变量占用的字节数。比如：64位系统中，占用8个字节
        &arr :    指针变量占用的字节数。比如：64位系统中，占用8个字节
    */

   //3、用指针，获取上述数组中的最大值
   int *ptr4 = arr;
    int max = *ptr4;
    for(int i = 1;i < LEN;i++){
        if(max < *(ptr4 + i)){
            max = *(ptr4 + i);
        }
    }
    printf("max = %d\n",max);

    return 0;
}