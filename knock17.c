#include <stdio.h>

int main(void)
{
    //要素数10の整数型の配列を宣言し、i番目の要素の初期値をiとし、順に値を表示するプログラムを作成せよ。
    
    int i,array[10];
    for (i = 0;i<10;i++){
        array[i] = i;
        printf("%d\n",array[i]);
    }
    return 0;
}