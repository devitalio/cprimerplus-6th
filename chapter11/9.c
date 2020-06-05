#include <stdio.h>

char * s_gets(char* st, int n)
{
    char* ret;
    char* newline;

    ret = fgets(st, n, stdin);
    if(ret) // i.e ret != NULL
    {
        if( (st = strchr(st, '\n'))
                st = '\0';
        else
            while(getchar() != '\n')
                continue;
    }
    return ret;
}


