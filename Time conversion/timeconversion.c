    #include <stdio.h>

    int main(void){

        int input;
        int hrs, mnt, scnd;

        
        scanf("%d", &input);

        hrs = input/3600;
        mnt = (input%3600)/60;
        scnd = input - (hrs*3600+mnt*60);

        printf("%d:%d:%d\n", hrs, mnt, scnd);
        
    }