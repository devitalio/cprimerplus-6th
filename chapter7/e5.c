#include <stdio.h>

int main(void)
{

    int count =0;
    char c;

    while( (c = getchar()) != '#')
    {
        switch (c)
        {
            case '.':
                putchar('!');
                count++;
                continue;
            case '!':
                putchar('!');
                count++;
            default:
                putchar(c);
        }

    }

    printf("\n%d replacements made\n", count);
    return 0;
}
