#include <stdio.h>

#define ROWS 3
#define COLS 2


void copy_arr(const double [], double [], int);

void copy_ptr(const double [], double [], int);

void copy_ptrs(const double [], double [], double *);

void show(const double [], int);

void show2(const double [][COLS], int);

int main(void)
{
    const double source[ROWS][COLS] = {
        {1.1, 2.2},
        {3.3, 4.4},
        {5.5, 6.6}
    };

    double target[ROWS][COLS];

    for ( int i = 0; i < ROWS; i++ )
        copy_arr(source[i], target[i], COLS);

    //copy_ptrs(source, target3, source + 5);
    //copy_ptr(source, target2, SIZE);
    //copy_arr(source, target2, SIZE);
    
    show2(target, ROWS);

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

void show2(const double ar[][COLS], int rows)
{
    for ( int i = 0; i < rows; i++ )
    {
        for ( int c = 0; c < COLS; c++ )
            printf("%f ", *( *(ar + i) + c));
        printf("\n");
    }

}
