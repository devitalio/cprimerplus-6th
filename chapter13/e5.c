#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define BUFSIZE 4096
#define SLEN 81

void append(FILE *source, FILE *dest);

int main(int argc, char *argv[])
{
    FILE *fa, *fs;

    int lines = 0;
    int ch;

    if( (fa = fopen(argv[1], "a+")) == NULL)
    {
        fprintf(stderr, "Can't open file %s\n", argv[1]);
        exit(EXIT_FAILURE);
    }

    if( setvbuf(fa, NULL, _IOFBF, BUFSIZE) != 0 )
    {
        fputs("Can't create output buffers\n", stderr);
        exit(EXIT_FAILURE);
    }
    
    for(int i = 2; i < argc; i++)
    {

        if(strcmp(argv[1], argv[i]) == 0)
            fputs("Can't append file to itself\n", stderr);
        else if( (fs = fopen(argv[i], "r")) == NULL)
            fprintf(stderr, "Can't open file %s\n", argv[i]);
        else
        {
            if( setvbuf(fs, NULL, _IOFBF, BUFSIZE) != 0)
            {
                fputs("Can't allocate input buffers\n", stderr);
                continue;
            }

            append(fa, fs);

            if( ferror(fs) != 0 )
                fprintf(stderr, "Error reading %s\n", argv[i]);
            if( ferror(fa) != 0 )
                fprintf(stderr, "Error reading %s\n", argv[1]);

            fclose(fs);
            printf("File %s appended\n", argv[i]);
        }
    }

    printf("Done appending\n");
    rewind(fa);
    printf("%s contents: \n", argv[1]);

    while( (ch = getc(fa)) != EOF)
        putchar(ch);

    printf("Done displaying\n");
    fclose(fa);
    exit(EXIT_SUCCESS);

}

void append(FILE *dest, FILE *source)
{
    size_t bytes;
    static char temp[BUFSIZE];

    while( (bytes = fread(temp, sizeof(char), BUFSIZE, source)) > 0)
    {
        printf("Read %ld bytes\n", bytes);
        fwrite(temp, sizeof(char), BUFSIZE, dest);
    }
}
