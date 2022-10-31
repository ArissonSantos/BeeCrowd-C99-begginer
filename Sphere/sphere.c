#include <stdio.h>

int main (void){

    int r;
    double volume;
    double pi;
    pi = 3.14159;

    scanf("%d", &r);

    volume = ((4/3.0)*r*r*r)*pi;

    printf("VOLUME = %.3lf\n", volume);
}