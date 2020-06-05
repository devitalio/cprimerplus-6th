#include <stdio.h>
#include <ctype.h>

int inalphabet(char);

int main(void)
{
    char c;

    int a;

    while( (c = getchar()) != EOF)
    {
        if( (a = inalphabet(c)) > 0)
            printf("%c is %dth letter in the alphabet", c, a);
        else
            printf("%c is not a letter\n", c);
    }
    return 0;
}

int inalphabet(char c)
{
    if(isalpha(c))
        return (toupper(c) - 'A') + 1;
    return -1;
}
