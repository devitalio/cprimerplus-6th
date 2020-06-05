#include <stdio.h>

float calculate(float x, float y)
{
    return (x -y)/(x * y);
}

int main(void)
{
    float x,y;
    printf("Enter 2 decimals: ");
    
    while(scanf("%f%f", &x,&y) == 2)
    {
        printf("%.4f\n", calculate(x,y));
    }

    printf("\n");
    return 0;
}

