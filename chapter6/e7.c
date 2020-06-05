#include <stdio.h>
#include <string.h>

int main(void)
{
    char input[40];

    printf("entrez un mot: ");
    scanf("%s", input);

    for(int i = strlen(input); i >=0; i--)
    {
        printf("%c", input[i]);
    }
    return 0;
}
