#include <stdio.h>

int main(void)
{
    //整数値を入力させ、その値が-5以上10未満であればOK、そうでなければNGと表示するプログラムを作成せよ。
    int x;
    printf("input number:");
    scanf("%d",&x);
    if (x >= -5 && x < 10){
        printf("OK\n");
    }else{
        printf("NG\n");
    }
    return 0;
}