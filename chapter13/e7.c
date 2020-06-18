#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

char* norm(char* const line)
{
    char *temp = line;
    while(*temp++ != '\n')
        continue;

    *--temp = '\0';

    return line;
}

int main(int argc, char *argv[])
{
    if(argc != 3)
    {
        fprintf(stderr, "Usage: %s file1 file2\n", argv[0]);
        exit(EXIT_FAILURE);
    }

    FILE *fa, *fb;

    if( (fa = fopen(argv[1], "r")) == NULL)
    {
        fprintf(stderr, "Can not open %s", argv[1]);
        exit(EXIT_FAILURE);
    }
    
    if( (fb = fopen(argv[2], "r")) == NULL)
    {
        fprintf(stderr, "Can not open %s", argv[2]);
        exit(EXIT_FAILURE);
    }

    bool file_a_has_input = true;
    bool file_b_has_input = true;
    char buff[256];

    while(file_a_has_input && file_b_has_input)
    {
        if(fgets(buff, 256, fa) == NULL)
        {
            file_a_has_input = false;
            break;
        }

        fprintf(stdout, "%s ", norm(buff));
        
        if(fgets(buff, 256, fb) == NULL)
        {
            file_b_has_input = false;
            break;
        }
        
        fprintf(stdout, "%s\n", norm(buff));
    }


    while(file_a_has_input)
    {
        if( fgets(buff, 256, fb) == NULL)
                break;

        fputs(buff, stdout);
    }

    while(file_b_has_input)
    {
        if( fgets(buff, 256, fb) == NULL)
                break;

        fputs(buff, stdout);
    }

    exit(EXIT_SUCCESS);
}
