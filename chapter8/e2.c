#include <stdio.h>

int main(void)
{

    int c;

    while( (c = getchar()) != EOF)
    {
        if (c < ' ')
        {
            //non printing chars
            if(c == '\n')
                printf("%c(\\n %d)", c ,c);
            else if(c == '\t')
                printf("(\\t %d)", c);
            else
                printf("(^%c %d)", c + 64, c);
        }
        else
            printf("(%c %d) ", c, c);

    }

    return 0;
}
