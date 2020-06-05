#include <stdio.h>

int main(void)
{
    long double sum;
    int limit;

    printf("Enter number of terms: ");


    while(scanf("%d",&limit), limit > 0)
    {
        sum = 0L;
        for(int i = 1; i < limit; i++) {

            long double coef = -1;
            for(int j=1; j<= i; j++)
                coef *= (-1);


            printf("calculating 1./%d * (-1 * %Lf)",i, coef); 
            sum += (1.L / i) * coef;
            printf(" Sum = %Lf\n", sum);
        }

        printf("Sum = %Lf\n", sum);
    }

    printf("\n");
    return 0;
}
