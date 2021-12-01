#include <stdio.h>

int main(void)
{
    int x,i;
    //整数値を入力させ、0から入力値まで数を1ずつ増やして表示するプログラムを作成せよ。
    printf("input number:");
    scanf("%d",&x);
    for (i=0;i<=x;i++){
        printf("%d\n",i);
    }
    return 0;
}