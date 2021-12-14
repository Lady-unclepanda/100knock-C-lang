#include <stdio.h>

int main(void)
{
    /*
    *{3, 7, 0, 8, 4, 1, 9, 6, 5, 2}で初期化される大きさ10の整数型配列を宣言し、整数値を2つ入力させ、
    *要素番号が入力値である2つの配列要素の値の積を計算して表示するプログラムを作成せよ。
    *入力値が配列の要素の範囲外であるかどうかのチェックは省略してよい。
    */

    int x,y;
    int array[10] = {3, 7, 0, 8, 4, 1, 9, 6, 5, 2};

    printf("input number1:");
    scanf("%d",&x);
    printf("input number2:");
    scanf("%d",&y);
    printf("%d * %d = %d\n",array[x],array[y],array[x] * array[y]);
    return 0;
}