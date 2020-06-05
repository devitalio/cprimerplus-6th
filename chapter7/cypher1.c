#include <stdio.h>

#define SPACE ' '

int main(void)
{
    char ch;

    while( (ch = getchar()) != '\n') //while not the end of the line
    {
        if(ch == SPACE)
            putchar(ch);
        else
            putchar(ch +1);
    }
    putchar(ch);

    return 0;
}

