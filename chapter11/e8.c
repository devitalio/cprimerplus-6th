#include <stdio.h>

const char* string_in(const char* s1, const char* s2)
{
    int found = 0;
    const char * start;

    if(!*s1 && !*s2)
       return s1;

    while(*s1 && *s1 != *s2)
        s1++;

    if(!*s1)
        return NULL;


    start = s1;
    while(*s1 && *s2 && *s1 == *s2)
    {
        s1++;
        s2++;
    }

    if(!*s2)
        return start;
    return NULL;

}

int main(void)
{
    char * s = "abcdef";

    const char * r;

    if( r = string_in(s, "cd") )
        printf("%s\n", r);
    else
        printf("string not found\n");

    return 0;
}
