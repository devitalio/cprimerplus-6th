#include <stdio.h>
#include <stdlib.h> //for exit()
#include <string.h>

#define LEN 81

void print_usage(const char *name);

int main(int argc, char *argv[])
{
    FILE *in, *out;
    int ch;

    char name[LEN];
    int count = 0;

    puts("Enter filename (q to quit): ");
    while( scanf("%s", name) != 1)
        print_usage(argv[0]);

    if(name[0] == 'q')
        exit(EXIT_SUCCESS);

    //set up input
    if( (in = fopen(name, "r")) == NULL )
    {
        fprintf(stderr, "Couldn't open file %s\n", name);
        exit(EXIT_FAILURE);
    }

    //set up output
    strncpy(name, name, LEN-5);
    name[LEN-5] = '\0';
    strcat(name, ".red");

    if( (out = fopen(name, "w")) == NULL)
    {
        fprintf(stderr, "Couldn't open file %s\n", name);
        exit(EXIT_FAILURE);
    }

    //copy data
    while( (ch = getc(in)) != EOF)
       if(count++ % 3 == 0)
          putc(ch, out);

    //clean up
    if( fclose(in) != 0 || fclose(out) != 0)
        fprintf(stderr, "Error closing files\n");
     

    return 0;
}

void print_usage(const char *name)
{
    printf("Usage: %s file\n", name);
}
