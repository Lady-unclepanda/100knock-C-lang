#include <stdio.h>

int main(void)
{
    //整数値を入力させ、その値の回数だけHello World!を繰り返して表示するプログラムを作成せよ。
    int x,i;
    printf("input number:");
    scanf("%d",&x);
    for (i=1;i <= x; i++){
        printf("Hello World!\n");
    }
    return 0;
}