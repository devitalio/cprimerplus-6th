#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    int r[10]= {0};

    srand(time(0));
    for(int i = 0; i < 1000; i++)
    {
       int n = rand() % 10;
       r[n]++;
    }

    for(int i = 0; i < 10; i++)
        printf("%d ", r[i]);
    return 0;
}
