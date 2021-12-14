#include <stdio.h>

int main(void)
{
    //整数値を入力させ、1から9まで、入力値以外を表示するプログラムを作成せよ。
    int x,i;
    printf("Input number:");
    scanf("%d",&x);
    for (i=1;i<=9;i++){
        if (x == i){
            continue;
        }
        else {
            printf("%d\n",i);
        }
    }
    return 0;
}