#include <stdio.h>

void reverse(double [], int);
void swap(double *, double *);
void show(const double[], int);

int main(void)
{
    double a[] = {1.0, 2.0, 3.0};

    reverse(a, sizeof a/sizeof(double));

    show(a, sizeof a/sizeof(double));
    return 0;
}

void reverse(double a[], int size)
{
    int i, j;
    for(i = 0, j = size - 1; i < j; i++, j--)
        swap(a+i, a+j);
}

void swap(double *x, double *y)
{
    double temp;
    temp = *x;
    *x = *y;
    *y = temp;
}

void show(const double ar[], int size)
{
    for(int c = 0; c < size; c++)
        printf("%f ", *(ar + c));
}
