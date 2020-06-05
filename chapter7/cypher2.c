#include <stdio.h>
#include <ctype.h>

#define SPACE ' '

int main(void)
{
    char ch;

    while( (ch = getchar()) != '\n') //while not the end of the line
    {
        if(isalpha(ch))
            putchar(ch + 1);
        else
            putchar(ch);
    }
    putchar(ch);

    return 0;
}

