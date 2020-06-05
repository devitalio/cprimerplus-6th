#include <stdio.h>

void temperatures(double fahr);
#define PROMPT "Please enter Fahrenheit grades: "
int main(void)
{
    double fahr;

    printf(PROMPT);
    while(scanf("%lf", &fahr) == 1){
        temperatures(fahr);
        printf(PROMPT);
    }

    return 0;
}

void temperatures(double fahr){
    double celsius, kelvin;

    celsius = 5./9. * (fahr - 32.);
    kelvin = celsius + 273.16;

    printf("%.2f Fahr = %.2f Celsius or %.2f Kelvin\n", fahr, celsius, kelvin);
}
