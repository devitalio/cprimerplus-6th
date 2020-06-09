#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[])
{
    int ch;
    FILE *fp;
    unsigned long int count = 0;

    /*
    if(argc != 2)
    {
        printf("Usage: %s filename\n", argv[0]);
        exit(EXIT_FAILURE);
    }
    */

    char filename[256];
    printf("Enter filename: ");
    scanf("%s",filename);



    if( (fp = fopen(filename, "r")) == NULL )
    {
        printf("Can't open the file %s\n", argv[1]);
        exit(EXIT_FAILURE);
    }

    while( (ch = getc(fp)) != EOF )
    {
        putc(ch, stdout); //same as putchar(ch)
        count++;
    }

    fclose(fp);
    printf("File %s has %lu characters\n", argv[1], count);

    exit(EXIT_SUCCESS);

}
