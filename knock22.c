#include <stdio.h>

int main(void)
{
    //整数値を入力させ、その値が-10以下、または、10以上であればOKと表示するプログラムを作成せよ。
    int x;
    printf("input number:");
    scanf("%d",&x);
    if (x <= -10 || x >= 10){
        printf("OK\n");
    }
    return 0;
}