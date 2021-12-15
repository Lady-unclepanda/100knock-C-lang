#include <stdio.h>

int main(void)
{
    //整数値を入力させ、その値が一桁の自然数かそうでないか判定するプログラムを作成せよ。
    //一桁の自然数＝0より大きく、かつ、9以下の整数、として判定すればよい。
    int x;
    printf("input number:");
    scanf("%d",&x);
    if (x > 0 && x <= 9){
        printf("%d is a single figure.\n",x);
    }else{
        printf("%d is not a single figure.\n",x);
    }
    return 0;
}