#include <stdio.h>
#include <float.h>

int main(void)
{
    float x = 1.0 / 3.0;
    double d = 1.0 / 3.0;


    printf("float type: %.4f %.12f %.16f\n", x,x,x);
    printf("double type: %.4f %.12f %.16f\n", d,d,d);
    printf("FLT_DIG %d, DBL_DIG %d\n", FLT_DIG, DBL_DIG);

    return 0;
}
