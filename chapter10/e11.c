#include <stdio.h>

#define ROWS 3
#define COLS 5

void show(const int (*ar)[COLS], int rows);

void x2(int [][COLS], int rows);

int main(void)
{
    int a[ROWS][COLS] = {
        {1, 2, 3, 4, 5},
        {1, 2, 3, 4, 5},
        {1, 2, 3, 4, 5}
    };

    show(a, ROWS);
    x2(a, ROWS);
    show(a, ROWS);
    return 0;
}

//void show(const int[][COLS], int rows)
void show(const int (*ar)[COLS], int rows)
{
    for ( int i = 0; i < rows; i++ )
    {
        for ( int c = 0; c < COLS; c++)
            printf("%d ", ar[i][c]);
        printf("\n");
    }
}

void x2(int ar[][COLS], int rows)
{
    for ( int i = 0; i < rows; i++ )
    {
        for ( int c = 0; c < COLS; c++)
            ar[i][c] = ar[i][c] * 2;
    }
}
