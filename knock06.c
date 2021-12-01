#include <stdio.h>

//整数値を入力させ、値が0ならzeroと表示するプログラムを作成せよ。

int main(void)
{
    int x;
    printf("数値を入力してください:");
    scanf("%d",&x);
    if (x == 0){
        printf("zero\n");
    }else{
        printf("%d\n",x);
    }
    return 0;
}