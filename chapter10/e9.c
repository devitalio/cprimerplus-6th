#include <stdio.h>

void copy(int, int, const double source[*][*], double dest[*][*]);
void show(int, int, const double a[*][*]);

int main(void)
{
    const double s[3][5] = {
        {1., 2., 3., 4., 5.},
        {6., 7., 8., 9., 10.},
        {11., 12., 13., 14., 15.}
    };

    double d[3][5];

    copy(3, 5, s, d);

    show(3, 5, d);

    return 0;
}

void copy(int rows, int cols, const double source[rows][cols], double dest[rows][cols])
{
    for(int i = 0; i < rows; i++ )
    {
        for ( int c = 0; c < cols; c++ )
        {
           dest[i][c] = source[i][c];
        }
    }
}

void show(int rows, int cols, const double a[rows][cols])
{
    for(int i = 0; i < rows; i++ )
    {
        for ( int c = 0; c < cols; c++ )
            printf("%lf ", a[i][c]);
        printf("\n");
    }
}
