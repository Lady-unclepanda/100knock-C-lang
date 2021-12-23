#include <stdio.h>
#include <math.h>

int main(void)
{
    //初乗り料金が1700mまで610円、それ以降は313mごとに80円のタクシーがある。
    //このタクシーに乗った距離をm単位で入力し、料金を計算するプログラムを作成せよ。
    double x,y;
    printf("距離 :");
    scanf("%lf",&x);
    if (x <= 1700) {
        printf("金額 %d\n",610);
    }
    else
    {
        y = ceil((x - 1700) / 313);
        printf("金額 : %d\n",(int)(y* 80) + 610);
    }
    return 0;
}