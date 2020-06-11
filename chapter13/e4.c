#include <stdio.h>

int main(int argc, char *argv[])
{
    FILE * fp;

    char c;
    char buf[255];

    for(; argc > 1; argc--)
    {
        char* filename = argv[argc-1];
        if( (fp = fopen(filename, "r")) == NULL)
            continue;

        //per byte version
        //while( (c = getc(fp)) != EOF)
        //    putchar(c);
        
        //per line version
        while( fgets(buf, 255, fp) != NULL )
            fputs(buf, stdout);
        fclose(fp);
        printf("-----------\n");


    }

    return 0;
}
