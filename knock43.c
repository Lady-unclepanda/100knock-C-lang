#include <stdio.h>
#include <math.h>

int main(void)
{
    //2次方程式 ax^2 + bx + c = 0 （x^2はxの2乗の意味）の係数a, b, cを入力し、
    //2次方程式の解が2つの実数解か、重解か、2つの虚数解かを判別するプログラムを作成せよ。
    float x,y,z,a;
    float solution1,solution2;
    printf("input number1:");
    scanf("%f",&x);
    printf("input number2:");
    scanf("%f",&y);
    printf("input number3:");
    scanf("%f",&z);
    a = y * y - 4 * x * z;
    if (a > 0){
        printf("2つの実数解\n");
    }
    else if (a == 0) {
        printf("重解\n");
    }
    else {
        printf("2つの虚数解\n");
    }
    return 0;
}