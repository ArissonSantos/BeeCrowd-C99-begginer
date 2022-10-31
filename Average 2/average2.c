#include <stdio.h>
int main(void){

    double x, y, z, xw, yw, zw, average;
    scanf("%lf""%lf""%lf", &x, &y, &z);

    xw = x * 2;
    yw = y * 3;
    zw = z * 5;

    average = (xw + yw + zw)/10;

    printf("MEDIA = %.1lf\n", average);
}