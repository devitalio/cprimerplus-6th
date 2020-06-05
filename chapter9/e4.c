#include <stdio.h>

double harmonic_mean(double, double);

int main(void)
{
    printf("%lf\n", harmonic_mean(3.L,4.L));
    return 0;
}

double harmonic_mean(double x, double y)
{
    double invX = 1 / x;
    double invY = 1 / y;

    return 1 / ((invX + invY)/2);

}
