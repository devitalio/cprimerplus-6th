#include <stdio.h>

void larger_of(double *, double *);

int main(void)
{
    double x = 10.L;
    double y = 5.L;

    larger_of(&x, &y);

    printf("%lf %lf\n",x, y);
    return 0;
}

void larger_of(double *x, double *y)
{
    if(*x > *y)
        *y = *x;
    else
        *x = *y;

}
