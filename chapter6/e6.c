#include <stdio.h>

int main(void)
{
    int lower, upper;
    printf("Enter lower limit: ");
    scanf("%d", &lower);
    printf("Now enter upper limit: ");
    scanf("%d",&upper);


    long long square, cube;

    for(printf("\n"); lower <= upper; lower++)
    {
        square = lower * lower;
        cube = square * lower;   
        printf("%15d%15lld%15lld\n", lower, square, cube);
    }

    return 0;
}
