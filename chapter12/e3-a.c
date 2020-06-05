#include <stdio.h>
#include "e3.h"

#define PROMPT "Enter 0 for metric mode, 1 for US "
int main(void)
{
    int mode;

    printf(PROMPT ":");
    scanf("%d", &mode);
    while( mode >= 0 )
    {
        if(mode > 1)
        {
            mode = 0;
            printf("Wrong mode, assuming metric\n");
        }
        double distance, fuel_consumed;
        get_info(mode, &distance, &fuel_consumed);
        show_info(mode, distance, fuel_consumed);
        printf(PROMPT);
        printf(" (-1 to quit): ");
        scanf("%d", &mode);
    }
    printf("Done\n");
    return 0;
}
