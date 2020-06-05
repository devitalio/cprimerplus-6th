#include <stdio.h>
#include <stdbool.h>

int main(void)
{
    char c;

    int count;
    bool start;

    while( (c = getchar()) != '#')
    {
        if(c == 'e' && !start)
        {
            start = 1;
            continue;
        }

        if(c == 'i' && start)
        {
            count++;
            start = 0;
        }
        start = 0;
    }

    printf("%d\n", count);
    return 0;
}


