#include <stdio.h>

int main(void)
{
    //整数値を2つ入力させ、それらの値の和、差、積、商と余りを求めるプログラムを作成せよ。
    //なお、差と商は1つ目の値から2つ目の値を引いた、あるいは割った結果とする。余りは無い場合も0と表示するのでよい。
    int x, y;
    printf("input 2 numbers :");
    scanf("%d,%d",&x,&y);
    printf("sum of %d and %d is %d\n",x,y,x+y);
    printf("diff of %d and %d is %d\n",x,y,x-y);
    printf("prod of %d and %d is %d\n",x,y,x*y);
    printf("quot of %d and %d is %d\n",x,y,x/y);
    return 0;
}