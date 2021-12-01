#include <stdio.h>

int main(void)
{
    int x;
    //整数値を入力させ、値が0ならzero、0でなければnot zeroと表示するプログラムを作成せよ。
    printf("input number:");
    scanf("%d",&x);
    if (x == 0){
        printf("zero\n");
    }else{
        printf("not zero\n");
    }
    return 0;
}