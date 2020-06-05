#include <stdio.h>
#include <limits.h>
#include <float.h>

int main(void)
{
    int integer;

    integer = INT_MAX;

    printf("Max integer value is %d or %#x \n", INT_MAX, INT_MAX);
    printf("Overflowing max integer gives %d or %#x \n", INT_MAX + 1, INT_MAX+1);

    printf("Max unsigned integer value is %u or %#x \n", UINT_MAX, UINT_MAX+1);
    printf("Overflowing max integer gives %u or %#x \n", UINT_MAX + 1, UINT_MAX + 1);

    printf("Max float is %f \n", FLT_MAX);
    printf("Min float is %e \n", FLT_MIN);



    return 0;
}
