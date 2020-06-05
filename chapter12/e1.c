#include <stdio.h>

//int units = 0; //external linkage

int critic(void);

int main(void)
{
    int units; //optional redeclaration

    printf("How many pounds to a firkin butter?\n");
    scanf("%d", &units);

    while( units != 56 )
        units = critic();

    printf("You must have looked it up\n");

    return 0;
}

int critic(void)
{
    //optional redeclaration ommited
    //
    int units;
    printf("No luck, tey again\n");
    scanf("%d", &units);
    return units;
}
