#include <stdio.h>

#define MINUTESPERHOUR 60

int main(void)
{
    int minutes;

    printf("Enter the minutes: ");
    scanf("%d", &minutes);
    while(minutes > 0) {
      printf("%d minutes are %d hours, %d minutes\n", minutes, minutes / MINUTESPERHOUR, minutes % MINUTESPERHOUR);
      printf("Enter the minutes: ");
      scanf("%d", &minutes);
    }
    return 0;
}

