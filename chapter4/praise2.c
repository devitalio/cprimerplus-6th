#include <stdio.h>
#include <string.h>

#define PRAISE "You are an extraordinary"
int main(void)
{
    char name[40];

    printf("What's your name ");
    scanf("%s", name);

    printf("\nHello %s. %s", name, PRAISE);
    printf("Your name of %zd letters occuppies %zd cells.\n", strlen(name), sizeof name);
    printf("The phrase of praise has %zd letters ", strlen(PRAISE));
    printf(" and occupies %zd memory cells\n", sizeof PRAISE);

    return 0;
}
