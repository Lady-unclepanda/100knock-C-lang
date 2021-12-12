#include <stdio.h>

int main(void)
{
    //整数値を入力させ、1からその値までの総和を計算して表示するプログラムを作成せよ。ただし、0以下の値を入力した場合は0と表示する。
    int i,x;
    printf("input number:");
    scanf("%d",&x);
    if (x <= 0){
        printf("%d\n",0);
    }
    else
    {
        i = (x * (x + 1)) / 2;
        printf("sum is %d\n",i);
    }
    return 0;
}