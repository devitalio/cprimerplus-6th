//* two_func.c
#include <stdio.h>

void butler(void); //ANSI/ISO function prototyping

int main(void)
{
    printf("I will summon the butler function\n");
    butler();
    printf("Yes, bring me some wine\n");

    return 0;
}

void butler(void)
{
    printf("You called, sir? \n");
}
