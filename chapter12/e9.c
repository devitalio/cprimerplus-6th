#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void)
{
    int size;

    char** words;

    char buf[256];

    printf("Enter the number of words: ");
    scanf("%d", &size);

    while (getchar() != '\n');

    words = (char**) calloc(size, sizeof(char*));

    for(int i = 0; i < size; i++ )
    {
        fgets(buf, 256, stdin);
        
        int j = 0;
        while( buf[j] != '\n') j++;
        buf[j] = '\0';


        int word_length = strlen(buf);
        words[i] = (char *)calloc(word_length + 1, sizeof(char));
        strcpy(words[i], buf);
        words[i][word_length] = '\0';

    }

    for(int i = 0; i < size; i++ )
    {
        printf("%s\n", words[i]);
    }

    printf("\n");
    return 0;
}

