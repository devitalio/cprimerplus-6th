#include <stdio.h>

void normalize(char * s)
{
    char* b = s;

    int i = 0;

    while(*s)
    {
        if( !(*s == ' ') )
        {
            *(b + i) = *s;
            i++;
        }
        s++;
    }
    *(b + i) = '\0';
}

int main(void)
{
    char buff[256];

    while(fgets(buff,256, stdin))
    {
        if(buff[0] == '\n')
            return 0;
        normalize(buff);  
        printf("%s", buff);
    }
    return 0;
}

