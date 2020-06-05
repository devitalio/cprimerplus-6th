#include <stdio.h>

#define CMTOFEET 30.48
#define CMTOINCH 2.54

int main(void)
{
    int heightInCm;
    int feet;

    printf("Enter your height in cm: ");
    scanf("%d", &heightInCm);

    feet = heightInCm / CMTOFEET;

    double remainder = heightInCm - (feet * CMTOFEET);
    double inches = remainder / CMTOINCH;


    printf("Your hight is %d feet %.2f inches\n", feet, inches);

    return 0;
}



