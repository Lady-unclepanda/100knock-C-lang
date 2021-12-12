#include <stdio.h>

int main(void)
{
    //整数値を入力させ、その値が-10未満ならrange 1、-10以上0未満であればrange 2、0以上であればrange 3、と表示するプログラムを作成せよ。
    int x;
    printf("input number:");
    scanf("%d",&x);
    if (x < -10)
    {
        printf("range 1\n");
    }
    else if (x >= -10 && x < 0)
    {
        printf("range 2\n");
    }
    else if (x >= 0)
    {
        printf("range 3\n");
    }
    return 0;
}