#include <stdio.h>

int main(void)
{
    //整数値を入力させ、値が正であればpositive、負であればnegative、0であればzeroと表示するプログラムを作成せよ。
    int x;
    printf("input number:");
    scanf("%d",&x);
    if (x >= 0){
        printf("positive\n");
    }else if (x == 0){
        printf("zero\n");
    }else {
        printf("negative\n");
    }
    return 0;
}