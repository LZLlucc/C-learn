#include <stdio.h>

/*

定义一个数组，通过函数setValue(int vals[], int len) 给数组元素赋值
 */

void setValue(int vals[], int len){
    for(int i = 0;i < len;i++){
        vals[i] = i * 10;
    }
}

//或
// void setValue1(int *vals, int len){   //int *ptr = arr;   ptr[i]
//     for(int i = 0;i < len;i++){
//         vals[i] = i * 10;
//     }
// }

int main()
{

    int arr[10] = {0};

    //遍历
    for(int i = 0;i < 10;i++){
        printf("arr[%d] = %d\n",i,arr[i]);
    }

    setValue(arr,10);

    //遍历
    for(int i = 0;i < 10;i++){
        printf("arr[%d] = %d\n",i,arr[i]);
    }

    return 0;
}