#include <stdio.h>

int main(void)
{

    int x;
    for(printf("Enter the number: "), scanf("%d",&x); x != 5; scanf("%d", &x), printf("\n"))
        printf("You did not guess, make another guess: ");
    printf("\nThat's it\n");

    return 0;
}
