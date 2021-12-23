#include <stdio.h>

int main(void){
    //最初に2以上の整数値を入力し、次の規則で計算し、計算回数と計算結果を表示し、計算結果が1になるまで繰り返すプログラムを作成せよ。
    //規則：ある値が偶数ならその値を1/2にする。奇数ならその値を3倍して1を足す。
    int x,y,i =1;
    printf("input number:");
    scanf("%d",&x);
    do 
    {
        if (x % 2 == 0) {
            y = x/2; 
            printf("%d: %d\n",i,y);
            x = y;
            i++;
        }
        else {
            y = x * 3 + 1;
            printf("%d: %d\n",i,y);
            x = y;
            i++;
        }
    } while (x != 1);
    return 0;

}