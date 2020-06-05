#include <stdio.h>
#include <inttypes.h>

int main(void)
{
    unsigned char age;

    printf("Enter your age in years: ");
    scanf("%" SCNu8, &age);

    printf("Your age in seconds is %lf\n", age * 3.156e7);

    return 0;
}
