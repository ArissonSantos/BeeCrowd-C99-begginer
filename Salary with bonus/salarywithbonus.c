#include <stdio.h>

int main(void){
    
    char name[50];
    double fix_sal, sales; 

    scanf("%s""%lf""%lf", &name, &fix_sal, &sales);

    double total_sal;

    total_sal = ((sales*15)/100) + fix_sal;


    printf("TOTAL = R$ %.2lf\n", total_sal);
}