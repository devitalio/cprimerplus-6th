#include <stdio.h>

int main(void)
{
    float x,y;
    printf("Enter 2 decimals: ");
    
    while(scanf("%f%f", &x,&y) == 2)
    {
        printf("%.4f\n", (x -y)/(x * y));
    }

    printf("\n");
    return 0;
}

