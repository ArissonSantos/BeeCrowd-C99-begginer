#include <stdio.h>

int main(void){

    int numb, work_hours;
    double amount_hour, salary;
    
    scanf("%d""%d", &numb, &work_hours);
    scanf("%lf", &amount_hour);
    
    salary = amount_hour * work_hours;  


    printf("NUMBER = %d\n", numb);
    printf("SALARY = U$ %.2lf\n", salary);

}