#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>

int main(void)
{
    char c;
    bool in_word = false;

    int digits, lower, upper, words;
    digits = lower = upper = words = 0;

    while ( (c = getchar()) != EOF )
    {
        if( isblank(c) )
        {
            if( in_word )
                in_word = false;

            continue;
        }


        if( isdigit(c) )
            digits++;
        if( isalpha(c) )
        {
            if( !in_word )
            {
                in_word = true;
                words++;
            }
            if( islower(c) )
                lower++;
            if( isupper(c) )
                upper++;
        }
    }

    printf("words: %d, lower: %d; upper %d; digits: %d\n", words, lower, upper, digits);
    return 0;
}

