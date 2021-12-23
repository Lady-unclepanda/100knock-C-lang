#include <stdio.h>

int main(void){
    //神山美術館の入場料金は、一人600円であるが、5人以上のグループなら一人550円、20人以上の団体なら一人500円である。
    //人数を入力し、入場料の合計を計算するプログラムを作成せよ。
    int x;
    printf("人数");
    scanf("%d",&x);
    if (x >= 5 && x <= 19){
        printf("料金 %d 円\n",x * 550);
    }
    else if (x >= 20) {
        printf("料金 %d 円\n",x * 500);
    }
    else {
        printf("料金 %d 円\n",x * 600);
    }
    return 0;
}