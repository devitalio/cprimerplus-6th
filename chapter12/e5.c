#include <stdio.h>
#include <stdlib.h>

void display(const int a[], int size)
{
    for( int i = 0; i < size; i++ )
    {
        printf("%d ", *(a + i));
    }
    printf("\n");

}

void sort(int *a, int size)
{
    for(int i = 0; i < size - 1; i++)
    {
        int max = *(a + i);
        for( int j = i + 1; j < size; j++ )
        {
            if( a[j] > a[i])
            {
                max = a[j];
                int temp = a[j];
                a[j] = a[i];
                a[i] = temp;
            }
        }
    }
}

int main(void)
{

    int r[100];

    for( int i = 0; i < 100; i++ )
    {
        int n = rand() % 100;
        *(r + i) = n;
    }

    display(r, 100);

    sort(r, 100);

    display(r, 100);

    return 0;
}
