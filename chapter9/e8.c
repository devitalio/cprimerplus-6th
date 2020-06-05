#include <stdio.h>

double power(double, int);

int main(void)
{
    printf("%lf\n", power(2., -2));
    return 0;
}

double power(double x, int n)
{
    if(n == 1)
        return x;
    if(n == 0)
        return 1;
    if(x == 0)
        return 0;

    if(n < 0)
        return 1 / (x * power(x, (n * -1) - 1));
    return x * power(x, n -1);
}
