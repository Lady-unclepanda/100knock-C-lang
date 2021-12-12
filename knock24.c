#include <stdio.h>

int main(void)
{
    //整数値を入力させ、その値が-10以上0未満、または、10以上であればOK、そうでなければNGと表示するプログラムを作成せよ。
    int x;
    printf("input number:");
    scanf("%d",&x);
    if ((x >= -10 && x < 0) || x >= 10 ){
        printf("OK\n");
    }else{
        printf("NG\n");
    }
    return 0;
}