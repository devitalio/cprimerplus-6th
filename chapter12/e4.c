#include <stdio.h>

int function(void);

int main(void)
{
    for(int i = 0; i < 10000; i++)
        printf("%d\n", function());
    return 0;
}

int function(void)
{
    static int counter = 0;

    return ++counter;
}
