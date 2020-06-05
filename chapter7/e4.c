#include <stdio.h>

int main(void)
{

    int count =0;
    char c;

    while( (c = getchar()) != '#')
    {
        if(c == '.')
        {
            putchar('!');
            count++;
            continue;
        }
        if(c == '!')
        {
            putchar('!');
            count++;
        }
        putchar(c);
    }

    printf("\n%d replacements made\n", count);
    return 0;
}
