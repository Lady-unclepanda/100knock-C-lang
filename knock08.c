#include <stdio.h>

int main(void)
{
    //整数値を入力させ、値が正であればpositiveと表示するプログラムを作成せよ。ただし0は正には含まない。
    int x;
    printf("input number:");
    scanf("%d",&x);
    if (x > 0){
        printf("positive\n");
    }else if (x < 0) {
        printf("negative\n");
    }
    return 0;
}