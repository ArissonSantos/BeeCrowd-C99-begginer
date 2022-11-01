#include <stdio.h>

int main(void){

    int a, b, s, gtr;


    scanf("%d""%d""%d", &a, &b, &s);

    gtr = (a+b+abs(a-b))/2;
    gtr = (s+gtr+abs(s-gtr))/2;

    printf("%d eh o maior", gtr);

}