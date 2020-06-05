// chapter 2 exercise 8
#include <stdio.h>

void one_three(void);
void two(void);

int main(void)
{
    printf("starting now\n");
    one_three();
    printf("done!\n");
    return 0;
}

void one_three(void)
{
    printf("One\n");
    two();
    printf("Three\n");
}

void two(void)
{
    printf("Two\n");
}
