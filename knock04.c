#include <stdio.h>

int main(void)
{
    //整数値を入力させ、その入力値を3倍した計算結果を表示するプログラムを作成せよ。
    int x;
    printf("input number : ");
    scanf("%d",&x);
    printf("your new number is : %d\n",x * 3);
    return 0;
}