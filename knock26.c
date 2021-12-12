#include <stdio.h>

int main(void)
{
    //整数値を入力させ、その値が1ならone、2ならtwo、3ならthree、それ以外ならothersと表示するプログラムをswicth-case文を使って作成せよ。
    int x;
    printf("input number:");
    scanf("%d",&x);
    switch (x)
    {
    case 1:
        printf("one\n");
        break;
    case 2:
        printf("two\n");
        break;
    case 3:
        printf("three\n");
        break;
    default:
        printf("others\n");
        break;
    }
    return 0;
}