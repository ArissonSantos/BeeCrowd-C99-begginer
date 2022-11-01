#include <stdio.h>

int main(void){

    int x = 1;

    for(x ; x <=100; x++){
        if (x % 15 == 0)
        {
            printf("m15\n");
        }else{
            if (x % 10 == 0)
            {
                printf("m10\n");
            }else{
                if (x % 5 == 0)
                {
                    printf("m5\n");
                }else{
                    printf("%d\n", x);
                }
                
            }
            
        }
        
    
        
    }
}