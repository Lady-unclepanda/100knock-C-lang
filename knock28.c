#include <stdio.h>
#include <math.h>

int main(void)
{
    //整数値を入力させ、その値の階乗を表示するプログラムを作成せよ。ただし、0以下の値を入力した場合は1と表示する。
    int x,y=1,i=1;
    printf("input number:");
    scanf("%d",&x);
    if (x <= 0){
        printf("%d\n",1);
    }
    else
    {
        while (i <= x)
        {
            y = y * i;
            i++;
        }
        printf("factorial: %d\n",y);
    }
    return 0;
}