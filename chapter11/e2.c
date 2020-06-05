#include <stdio.h>
#include <ctype.h>

char* next(char* s, int n)
{
    if ( n <= 0 )
        return NULL;

    char c;
    for(int i = 0; i < n; i++)
    {
        c = getchar();
        if(isspace(c))
        {
            *(s + i) = '\0';
            return s;
        }
        *(s + i) = c;
    }

    *(s + n) = '\0';
    return s;
}

//does not stop after first blank. always reads n!
char* next2(char* s, int n)
{

    char * start;
    if ( n <= 0 )
        return NULL;
    
    if(start = fgets(s, n + 1, stdin))
    {
        start = s;
        while(!isspace(*s) && *s )
            s++;
        *s = '\0';
    }
    return start;

}

int main(void)
{
    char buf[10];


    printf("%s\n", next2(buf, 3));


    printf("%s\n", next2(buf, 3));
    printf("%s\n", next2(buf, 3));
    return 0;
}

