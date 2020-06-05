#include <stdio.h>

int main(void)
{
    double initial = 1000000;
    int year_counter = 0;

    while(initial > 0)
    {
        initial = (initial - 100000.) * 1.08;
        year_counter++;

    }

    printf("after %d years\n", year_counter);
    return 0;
}
