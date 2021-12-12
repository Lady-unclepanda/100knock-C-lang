#include <stdio.h>

int main(void)
{
    //整数値を入力させ、0から入力値を超えない値まで2ずつ増やして表示するプログラムを作成せよ。
    int i = 0,x;
    printf("数値を入力してください。:\n");
    scanf("%d",&x);

    while (i * 2 <= x)
    {
        /* code */
        printf("%d\n",i * 2);
        i++;
    } 
    return 0;
}