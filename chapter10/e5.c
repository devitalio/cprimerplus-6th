#include <stdio.h>

int max(const int a[], int array_size)
{
    int max = *a;

    for(int i = 1; i < array_size; i++)
        if ( *(a + i) > max )
            max = *(a + i);
    return max;
}

int min(const int a[], int array_size)
{
    int min = *a;

    for ( int i = 1; i < array_size; i++ )
        if ( *(a + i) < min )
            min = a[i];
    return min;
}

int main(void)
{
    const int a[] = {2};

    printf("%d\n", max(a, sizeof a/sizeof(int)) - min(a, sizeof a/sizeof(int)));

    return 0;
}


