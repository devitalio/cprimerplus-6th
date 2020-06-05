#include <stdio.h>
#include <stdbool.h>

#define PROMPT printf("enter positive integer: ")

int main(void)
{
    int upper, r;
    unsigned current_prime = 1;
    bool isPrime = true;

    do{
        PROMPT;
    } while( ((r = scanf("%d", &upper)) != 1 && getchar() ) || (r ==1 &&  upper < 0));

    while(current_prime < upper)
    {

        for(int div = 2; (div * div) <= current_prime; div++)
        {
            if(current_prime % div == 0)
            {
                isPrime = false;
                break;
            }
        }

        if(isPrime)
            printf("%d, ", current_prime);

        isPrime = true;
        current_prime++;


    }

    return 0;
}





    
