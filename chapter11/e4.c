#include <stdio.h>
#include <stdbool.h>
#include <ctype.h>

void read_wordn(char* dest, int n)
{
    char c;

    while( isspace(c = getchar()) )
        continue;

    for(int i = 0; i < n; c = getchar(), i++)
    {

        if(isspace(c))
            break;
 
        *dest++ = c;
    }

    *dest++ = '\0';

    /*
    while( (c = getchar()) )
    {
        if(isspace(c) && !in)
            continue;

        in = true;
        if(isspace(c) && in)
        {
            *dest++ = '\0';
            return;
        }
        
        if(count < n)
            *dest++ = c;
        else
        {
            *dest++ = '\0';
            return;
        }
        count++;
    }
    */

}

int main(void)
{

    char buf[80];

    read_wordn(buf, 2);

    printf("%s", buf);

    return 0;
}
