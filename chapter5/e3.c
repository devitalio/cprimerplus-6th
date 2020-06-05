#include <stdio.h>

int main(void)
{
    int days;
    const int daysInAWeek = 7;

    printf("Enter days: ");
    scanf("%d", &days);

    while(days > 0) {
        printf("%d days are %d weeks, %d days\n", days, days / daysInAWeek, days % daysInAWeek);
        scanf("%d", &days);
    }
    return 0;
}
        
