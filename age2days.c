//age2day converts years to days
#include <stdio.h>

int main(void)
{
    int ageInYears, ageInDays;

    ageInYears = 2020 - 1983;
    ageInDays = ageInYears * 365; 
    printf("%d years are %d days\n", ageInYears, ageInDays);
   
    return 0;
} 
