#include <stdio.h>

int* sum(const int* a1, const int* a2, int* a3, int size);

void show(int, const int a[*]);


int main(void)
{
    const int a[] = {2, 4, 5, 8};
    const int b[] = {1, 0, 4, 6};

    int s[4];


    show(4, sum(a,b,s,4));

    return 0;
}


int* sum(const int* a1, const int* a2, int* a3, int size)
{
    for ( int i = 0; i < size; i++ )
        *(a3 + i) = *(a1 + i) + *(a2 + i);
    return a3;
}

void show(int cols, const int a[cols])
{
    for ( int c = 0; c < cols; c++ )
        printf("%d ", a[c]);
    printf("\n");
}
