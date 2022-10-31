#include <stdio.h>
int main(void){

    int prod_1, und_prod_1, prod_2, und_prod_2;
    double val_und_prod_1, val_und_prod_2, total_pay;

    scanf("%d %d %lf", &prod_1, &und_prod_1, &val_und_prod_1);
    scanf("%d %d %lf", &prod_2, &und_prod_2, &val_und_prod_2);


    total_pay = (und_prod_1*val_und_prod_1)+(und_prod_2*val_und_prod_2);


    printf("VALOR A PAGAR: R$ %.2lf\n", total_pay);

}