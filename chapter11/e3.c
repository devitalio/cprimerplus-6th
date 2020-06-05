#include <stdio.h>
#include <stdbool.h>
#include <ctype.h>

void read_word(char* dest)
{
    bool in = false;
    char c;

    while( (c = getchar()) )
    {
        if(isspace(c) && !in)
            continue;

        in = true;
        if(isspace(c) && in)
        {
            *dest++ = '\0';
            break;
        }
        
        *dest++ = c;
    }
    

}

int main(void)
{

    char buf[80];

    read_word(buf);

    printf("%s", buf);

    return 0;
}
