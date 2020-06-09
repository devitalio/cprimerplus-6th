#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    if(argc != 3)
    {
        printf("Usage: %s source destination\n", argv[0]);
        exit(EXIT_FAILURE);
    }

    FILE *fs, *fd;

    if( (fs = fopen(argv[1], "rb")) == NULL )
    {
        printf("Can't open %s\n", argv[1]);
        exit(EXIT_FAILURE);
    }

    if( (fd = fopen(argv[2],"wb")) == NULL )
    {
        printf("Can't open %s\n", argv[2]);
        exit(EXIT_FAILURE);
    }

    char c;
    while( (c = getc(fs)) != EOF )
        putc(c, fd);

    fclose(fs);
    fclose(fd);

    exit(EXIT_SUCCESS);
}
