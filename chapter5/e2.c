#include <stdio.h>

int main(void)
{
    int i;

    printf("Enter integer: ");
    scanf("%d", &i);
    int end = i + 10;
    while(i < end + 1) {
        printf("%d ", i++);
    }
    return 0;
}
