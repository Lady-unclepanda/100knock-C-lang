#include <stdio.h>

int main(void)
{
    //整数値を2つ入力させ、1つめの値を2つめの値で割った結果を表示し、続けてその結果に2つめの値を掛けた結果を表示するプログラムを作成せよ。
    //計算はすべて整数型で行うこと（割り切れない場合は自動的に小数点以下が切り捨てられる）。
    int x,y,z;
    printf("input number 1st value:");
    scanf("%d",&x);
    printf("input number 2nd value:");
    scanf("%d",&y);
    z = x / y;
    printf("result:%d\n",z);
    printf("result:%d\n",z * y);
    return 0;
}