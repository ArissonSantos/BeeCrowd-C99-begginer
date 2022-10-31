#include <stdio.h>

int main(void){

    double a, b, c;
    double area;
    double pi = 3.14159;

    scanf("%lf", &a);
    scanf("%lf", &b);
    scanf("%lf", &c);

    area = (a * c)/2;
        printf("TRIANGULO: %.3lf\n", area);
    area = pi*(c*c);
        printf("CIRCULO: %.3lf\n", area);
    area = (c*(a+b))/2;
        printf("TRAPEZIO: %.3lf\n", area);
    area = b * b;
        printf("QUADRADO: %.3lf\n", area);
    area = a * b;
        printf("RETANGULO: %.3lf\n", area);

}