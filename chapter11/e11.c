#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define SIZE 3

void show(char (*)[], int); //two dimensional table (char [][])
char get_choice();
void collate_show(char *[], int); //table of pointers to char (char ** )
void toto(char * (*ptr)[]); // char* [][]

void increasing_length(char **, int);
int word_length(const char * word);
void first_word(char* strings[], int count);

int main(int argc, char** argv) //argv = table of pointers-to-char (char * argv[])
{
    char strings[SIZE][256];

    char * pts[SIZE];

    int count = 0;

    while(fgets(strings[count], 256, stdin) && count < SIZE)
    {
        pts[count] = strings[count];
        count++;
    }


    char choice;

    while( (choice = get_choice()) != 'q')
    {
        switch(choice)
        {
            case 'a':
                show(strings, SIZE);
                break;
            case 'b':
                collate_show(pts, SIZE);
                break;
            case 'c':
                increasing_length(pts, SIZE);
                break;
            case 'd':
                first_word(pts, SIZE);
                break;
            default:
                printf("unknown option: %c\n", choice);
                break;
        }
    }


    return 0;
}

void first_word(char* strings[], int count)
{
    char * top;
    for(int i = 0; i < count; i++)
    {
        int max = word_length(strings[i]);
        int index = -1;

        for(int j = i + 1; j < count; j++)
        {
            if( word_length(strings[j]) >= max)
            {
                index = j;
                max = word_length(strings[j]);
            }
                
        }

        if(index > 0)
        {
            top = strings[i];
            strings[i] = strings[index];
            strings[index] = top;
        }
    }
    for(int i = 0; i < count; i++)
        printf("%s\n", strings[i]);
}

int word_length(const char * word)
{
    int count = 0;

    while(isblank(*word))
    {
        word++;
    }

    while(*word != '\0' && !isblank(*word)) 
    {
        count++;
        word++;
    }
    return count;
}




void increasing_length(char** strings, int count)
{
    char* top;

    for(int i = 0; i < count; i++)
    {
        int max = strlen(strings[i]);

        int index = -1;

        for(int j = i + 1; j < count; j++)
        {
            if( strlen(strings[j]) >= max)
            {
                index = j;
                max = strlen(strings[j]);
            }
                
        }

        if(index > 0)
        {
            top = strings[i];
            strings[i] = strings[index];
            strings[index] = top;
        }

    }

    for(int i = 0; i < count; i++)
        printf("%s\n", strings[i]);

}

void collate_show(char* strings[], int count)
{
    char * top;

    for(int i = 0; i < count - 1; i++)
    {
        for(int j = i + 1; j < count; j++)
        {
            if(strcmp(strings[i], strings[j]) > 0)
            {
                top = strings[i];
                strings[i] = strings[j];
                strings[j] = top;
            }
                
        }
    }

    for(int i = 0; i < count; i++)
        printf("%s\n", strings[i]);
}

void show(char (*strings)[256], int count)
{
    for( count = 0; count < SIZE; count++)
    {
        if(strings[count] != NULL)
            printf("%s\n", strings[count]);
    }
}

char get_choice()
{
    char choice;

    do
    {
        printf("\n******************\n");
        printf("a. show input\n");
        printf("b. show in collating order\n");
        printf("c. increasing length order\n");
        printf("d. increasing first word length order\n");
        printf("q. quit\n");
    } while( scanf("%c", &choice) != 1);

    while(getchar() != '\n') continue;

    return choice;

}
