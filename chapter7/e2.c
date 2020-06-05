#include <stdio.h>

int main(void)
{
    char c;
    int counter = 0;

    while( (c = getchar()) != '#')
    {
        printf("%c=%d ",c, c);
        counter++;

        if(counter % 8 == 0)
        {
            printf("\n");
            counter = 0;
        }

    }
    printf("\n");
    return 0;
}
