#include <stdio.h>
#include "e2.h"

#define PROMPT "Enter 0 for metric mode, 1 for US "
int main(void)
{
    int mode;

    printf(PROMPT ":");
    scanf("%d", &mode);
    while( mode >= 0 )
    {
        set_mode(mode);
        get_info();
        show_info();
        printf(PROMPT);
        printf(" (-1 to quit): ");
        scanf("%d", &mode);
    }
    printf("Done\n");
    return 0;
}
