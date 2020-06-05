#include <stdio.h>

int max(const int a[], int array_size)
{
    int max = *a;

    for(int i = 0; i < array_size; i++)
        if ( *(a + i) > max )
            max = *(a + i);
    return max;
}

int main(void)
{
    const int a[] = {1,2,3,4,5,6,7,8,9};

    printf("%d\n", max(a, sizeof a/sizeof(int)));

    return 0;
}

