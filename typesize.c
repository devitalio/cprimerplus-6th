#include <stdio.h>

int main(void)
{
    /* c99 provides %zd for sizes */
    printf("type int has a size of %zd bytes\n", sizeof(int));
    printf("type char has a size of %zd bytes\n", sizeof(char));
    printf("type long has a size of %zd bytes\n", sizeof(long));
    printf("type short has a size of %zd bytes\n", sizeof(short));
    printf("type long long has a size of %zd bytes\n", sizeof(long long));
    printf("type float has a size of %zd bytes\n", sizeof(float));
    printf("type double has a size of %zd bytes\n", sizeof(double));
    printf("type long double has a size of %zd bytes\n", sizeof(long double));

    return 0;
}
