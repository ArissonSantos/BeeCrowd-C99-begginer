#include <stdio.h>

int main(){

    double x, y, xw, yw, average;

    scanf("%lf", &x);
    scanf("%lf", &y);

    xw = x * 3.5;
    yw = y * 7.5;

    average = (xw + yw)/11;

    printf("MEDIA = %.5lf", average);
    
    return 0;

}