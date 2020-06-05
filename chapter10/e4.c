#include <stdio.h>

int max_index(const double a[], int size)
{
    int index, max;
    max = *a;

    for(int i = 1; i < size; i++ )
        if( max < *(a + i) )
        {
            max = *(a + i);
            index = i;
        }

    return index;
}

int main(void)
{
    const double a[] = { 10.,2.,3.,4.,5.};

    printf("%d\n", max_index(a, sizeof a/sizeof(double)));
    return 0;
}
