#include <stdio.h>

int main(void)
{
    //整数値を入力させ、入力値が0でなければ再度入力させ、0であれば終了するプログラムを作成せよ。
    int x;
    do {
        printf("数値を入力してください:\n");
        scanf("%d",&x);
    } while (x != 0);
    return 0;
}