#include <stdio.h>
#include <string.h>

int main(void)
{
    char name[256];

    printf("Enter yout name: ");
    scanf("%s", name);
    printf("\"%s\"\n", name);
    printf("'%20s'\n", name);
    printf("'%-20s'\n", name);

    printf("'   %*s'\n", strlen(name),  name);


    return 0;
}
