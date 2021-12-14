#include <stdio.h>

int main(void)
{
    //整数値を入力させ、1から9まで、入力値と入力値+1以外を表示するプログラムを作成せよ。
    //入力値が9の場合は9のみ表示しない。
    int x,i;
    printf("Input number:");
    scanf("%d",&x);
    for (i=1;i<=9;i++){
        if (x == i){
            continue;
        }else if (x + 1 == i){
            continue;
        }
        else {
            printf("%d\n",i);
        }
    }
    return 0;

}