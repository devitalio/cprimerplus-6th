#include <stdio.h>
#include <stdbool.h>
#include <ctype.h>

int main(void)
{
    int c;
    int char_count = 0;
    int word_count = 0;
    bool inword = false;

    while( (c = getchar()) != EOF)
    {
        if(isspace(c) || ispunct(c))
        {
            inword = false;
        }
        else if (isalpha(c))
        {
            if(!inword)
            {
                word_count++;
                inword = true;
            }
            char_count++;
        }
    }

    printf("average letters per word is %d\n", char_count/word_count);
    return 0;
}
