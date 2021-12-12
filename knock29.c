#include <stdio.h>

int main(void)
{
    //整数値を5回入力させ、それらの値の合計を表示するプログラムを繰り返しを使って作成せよ。
    int x,i,sum=0,array[5];
    for (i=0;i<sizeof(array)/sizeof(array[0]);i++){
        printf("input number:");
        scanf("%d",&x);
        array[i] = x;
        sum += array[i];
    }
    printf("sum is :%d\n",sum);
    return 0;
}