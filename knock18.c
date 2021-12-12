#include <stdio.h>

int main(void)
{
    //要素数10の整数型の配列を宣言し、整数値を入力させ、すべての配列の要素を入力値として、すべての要素の値を表示するプログラムを作成せよ。
    int i,x,array[10];
    printf("input number:");
    scanf("%d",&x);
    for (i=0;i<10;i++){
        array[i] = x;
        printf("%d\n",array[i]);
    }
    return 0;
}