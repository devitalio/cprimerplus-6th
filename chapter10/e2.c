#include <stdio.h>

#define SIZE 5


void copy_arr(const double [], double [], int);

void copy_ptr(const double [], double [], int);

void copy_ptrs(const double [], double [], double *);

void show(const double [], int);

int main(void)
{
    const double source[] = {1.1, 2.2, 3.3, 4.4, 5.5};

    double target1[SIZE], target2[SIZE], target3[SIZE];

    //copy_ptrs(source, target3, source + 5);
    //copy_ptr(source, target2, SIZE);
    copy_arr(source, target2, SIZE);
    
    show(target2, (sizeof source)/sizeof(double));

    printf("\n");

    return 0;
}

void copy_arr(const double s[], double d[], int size)
{
    for(int i = 0; i < size; i++)
        d[i] = s[i];
}

void copy_ptr(const double *s, double *d, int size)
{
    for(int i = 0; i < size; i++)
        *(d + i) = *(s + i);
}

void copy_ptrs(const double s[], double d[], double* end)
{
    while(s < end)
    {
        *d++ = *s++;
        //printf("%p ", s);
    }
}

void show(const double ar[], int size)
{
    for(int c = 0; c < size; c++)
        printf("%f ", *(ar + c));
}
