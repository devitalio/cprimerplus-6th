#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

int main(int argc, char *argv[])
{
    FILE *fs, *fd;

    char source[255];
    char dest[255];
    
    if(argc == 1)
    {
        printf("Enter source file: ");
        scanf("%s", source);
        printf("Enter destination file: ");
        scanf("%s", dest);
    }
    else if(argc == 3)
    {
        strcpy(source, argv[1]);
        strcpy(dest, argv[2]);
    }
    else
    {
        printf("Usage: %s source destination\n", argv[0]);
        exit(EXIT_FAILURE);
    }


    if( (fs = fopen(source, "r")) == NULL )
    {
        printf("Can't open %s\n", argv[1]);
        exit(EXIT_FAILURE);
    }

    if( (fd = fopen(dest,"w")) == NULL )
    {
        printf("Can't open %s\n", argv[2]);
        exit(EXIT_FAILURE);
    }

    char c;
    while( (c = getc(fs)) != EOF )
        putc(toupper(c), fd);

    fclose(fs);
    fclose(fd);

    exit(EXIT_SUCCESS);
}
