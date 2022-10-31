#include <stdio.h>

int main(void){

    double a, b ,c, tri, cir, trap, quad, ret, pi;
    
    scanf("%lf %lf %lf", &a, &b, &c);

    pi = 3.14159;

    tri = (a * b)/2;
    cir = pi * (c*c);
    trap = ((b+b) * a)/2;
    quad = a * a;
    ret = a * b;

   
    printf("TRIANGULO: %.3lf\n", tri);
    printf("CIRCULO: %.3lf\n", cir);
    printf("TRAPEZIO: %.3lf\n", trap);
    printf("QUADRADO: %.3lf\n", quad);
    printf("RETANGULO: %.3lf\n", ret);
    
}