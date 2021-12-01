#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    //整数値を入力させ、その値を絶対値にして表示するプログラムを作成せよ。（できれば変数の値を絶対値に変えるようにせよ）
    int x;
    printf("input number:");
    scanf("%d",&x);
    x = abs(x);
    printf("%d\n",x);
    return 0;
}