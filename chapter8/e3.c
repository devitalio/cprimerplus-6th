#include <stdio.h>
#include <ctype.h>

int main(void)
{

    int c, upper, lower, other;

    upper = lower = other = 0;

    while( (c = getchar()) != EOF)
    {
        if(isalpha(c))
        {
            if(isupper(c))
                upper++;
            else
                lower++;
        }
        else
            other++;
    }

    printf("upper case: %d, lower case: %d, others %d\n", upper, lower, other);
    return 0;
}


