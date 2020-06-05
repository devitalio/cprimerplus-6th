#include <stdio.h>
#include <string.h>

char* mystrncpy(char * s1, char* s2, int n)
{
    int c;

    for(int i = 0; i < n; i++)
    {
        if( *(s2 + i) )
            *(s1 + i) = *(s2 + i);
        else
            *(s1 + i) = '\0';
    }


    return s1;
}

int main(void)
{
    char buf[10]; // = "this is a super string";

    mystrncpy(buf, "test", 3);

    printf("%s\n", buf);


    char buf2[10]; // =  "this is a super string";
    strncpy(buf2, "test", 3);

    printf("%s\n", buf2);


    return 0;
}
