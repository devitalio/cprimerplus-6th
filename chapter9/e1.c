#include <stdio.h>

double min(double, double);

int main(void)
{
    double x, y;

    x= 10.3;
    y= 5.3;

    printf("the smallests of %lf and %lf is %lf\n", x, y, min(x,y));

    return 0;

}

double min(double x, double y) { return x < y ? x : y; }
