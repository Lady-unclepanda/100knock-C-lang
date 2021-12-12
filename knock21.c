#include <stdio.h>

int main(void)
{
    //整数値を入力させ、その値が5よりも大きく、かつ、20よりも小さければOKと表示するプログラムを作成せよ。
    int x;
    printf("input number:");
    scanf("%d",&x);
    if (x >= 5 && x <= 20){
        printf("OK\n");
    }
    return 0;
}