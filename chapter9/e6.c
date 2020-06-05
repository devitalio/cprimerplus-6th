#include <stdio.h>

void sort(double *, double *, double *);

int main(void)
{
    double x = 3.;
    double y = 2.;
    double z = 1.;

    sort(&z, &y, &x);

    printf("%lf %lf %lf\n",x, y, z);
    return 0;
}

void sort(double *x, double *y, double *z)
{
    double temp;

    if(*x == *y && *y == *z) return;

    if(*x < *y)
    {
        if(*y <= *z)
            return;
        else
        {
            temp = *y;
            *y = *z;
            *z = temp;
        }

    }

    else if(*x < *z)
    {
        // x > y > z?
        // x > y < z?
        if(*x >= *z)
        {
            temp = *z;
            *z = *x;
            *x = (*y > temp) ? temp : *y;
        }
        else // x >y < z
        {
            temp = *y;
            *y = *x;
            *x = temp;

        }

    }
}
