#include <stdio.h>

void chline(char, int, int);

int main(void)
{
    chline('x', 2, 5);
    return 0;
}

void chline(char c, int i, int j)
{
    for(int k = 1; k < i; k++)
        printf(" ");
    for(; i <= j; i++)
        printf("%c", c);
    printf("\n");
}
