#include <stdio.h>

int main(void)
{
    //整数値を入力させ、その値が偶数ならばeven、奇数ならばoddと表示するプログラムを作成せよ。
    int x;
    printf("input number:");
    scanf("%d",&x);
    if (x % 2 == 0){
        printf("%d is even\n",x);
    }else{
        printf("%d is odd\n",x);
    }
    return 0;
}