#include <stdio.h>

int main(void)
{
    //整数値を入力させ、入力値から0まで数を1ずつ減らして表示するプログラムを作成せよ。
    int x,i;
    printf("input number:");
    scanf("%d",&x);
    for (i=x;i<=x;i--){
        printf("%d\n",i);
        if (i == 0) break;
    }
    return 0;
}