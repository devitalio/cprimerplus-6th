#include <stdio.h>

int main(void)
{
    char end_letter;

    printf("enter the capital letter: ");
    scanf("%c",&end_letter);

    int rows = end_letter - 'A';

    for(int i = 0; i <= rows; i++)
    {
        for(int j = i; j <= rows - 1; j++)
            printf(" ");
        
        for(char asc='A'; asc < 'A'+ i; asc++)
            printf("%c",asc);

        for(char desc='A'+ i; desc >= 'A'; desc--)
            printf("%c",desc);
        
        printf("\n");
    }

    return 0;
}
