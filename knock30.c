#include <stdio.h>

int main(void)
{
    //整数値を入力させ、その個数だけ*を表示するプログラムを作成せよ。
    //入力値が0以下の値の場合は何も書かなくてよい。
    int x,i;
    printf("input number:");
    scanf("%d",&x);
    for(i=0;i<=x;i++){
        printf("*");
        if (i==x) {
            printf("\n");
        }
    }
    return 0;
}