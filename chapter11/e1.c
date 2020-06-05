#include <stdio.h>

char* next(char* s, int n)
{
    if ( n <= 0 )
        return NULL;

    return fgets(s, n + 1, stdin);
}
        
int main(void)
{
    char in[10];

    next(in, 3);

    printf("%s", in);


    next(in, 5);
    printf("%s", in);
    return 0;
}
