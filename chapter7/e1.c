#include <stdio.h>

int main(void)
{
    char c;

    int spaces, newline, others;
    spaces = newline = others = 0;

    while( (c=getchar()) != '#')
    {
        switch(c) 
        {
            case ' ': spaces++;
                      break;
            case '\n': newline++;
                       break;
            default: others++;
        }
    }

    printf("spaces newlines others\n");
    printf("%7d%7d%7d\n", spaces, newline, others);
    return 0;
}
