#include <stdio.h>

int main(void)
{
    int c;
    long long count = 0;

    while( (c = getchar()) != EOF)
        count++;

    printf("%lld", count);
    return 0;
}
