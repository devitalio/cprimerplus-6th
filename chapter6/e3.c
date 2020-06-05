#include <stdio.h>

int main(void)
{

    char c;

    int rows = 'F' - 'A';


    for(c = 0; c <= rows; c++)
    {
        for(char i = 'F';   'F'-i  <= c ; i--)
            printf("%c", i);
        printf("\n");
    }

    return 0;
}
