#include <stdio.h>

int main(void)
{
    float weight; // uset weight
    float value; // platinum equivalent

    printf("Are you worth your weight in platinum?\n");
    printf("Let's chel it out\n");
    printf("Please enter your weight in kilograms: ");

    /*get input from user */
    scanf("%f", & weight);

    // assume 24820 US dollars per kilogram
    value = 24820.0 * weight;
    printf("Your weight in platinum is worth $%.2f.\n",value);
    
    return 0;
} 
