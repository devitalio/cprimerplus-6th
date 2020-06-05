#include <stdio.h>

int main(void)
{
    char first[256];
    char last[256];

    printf("Enter yout first and last names :");
    scanf("%s %s", first, last);
    printf("%s %s", last, first);

    return 0;
}
