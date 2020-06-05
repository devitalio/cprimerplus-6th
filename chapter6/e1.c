#include <stdio.h>

#define SIZE 26
int main(void)
{
    char alphabet[SIZE];

    char ch;
    for(ch = 'a'; ch <  'a' + SIZE; alphabet[ch-'a'-1] = ch++)
        ;

    
    int i = 0;
    for(;i < SIZE; i++)
        printf("%c ", alphabet[i]);
    return 0;
}
