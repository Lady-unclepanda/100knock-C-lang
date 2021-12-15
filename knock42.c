#include <stdio.h>

int main(void)
{
    //整数値を3つ入力させ、それらの値が小さい順（等しくてもよい）に並んでいるか判定し、
    //小さい順に並んでいる場合はOK、そうなっていない場合はNGと表示するプログラムを作成せよ。
    int x,y,z;
    printf("input number1:");
    scanf("%d",&x);
    printf("input number2:");
    scanf("%d",&y);
    printf("input number3:");
    scanf("%d",&z);
    if (x <= y <= z){
        printf("OK\n");
    }else{
        printf("NG\n");
    }
    return 0;
}