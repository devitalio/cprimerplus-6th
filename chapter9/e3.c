#include <stdio.h>

void printF(char, int, int);

int main(void)
{
    printF('x', 5, 5);
    return 0;
}

void printF(char c, int i, int j)
{
    for(int k = 0; k < i; k++)
    {
        for(int l = 0; l < j; l++)
            printf("%c",c);
        printf("\n");
    }
}
