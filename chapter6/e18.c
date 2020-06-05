#include <stdio.h>

#define DUNBAR 150

int main(void)
{
    int friends = 5;
    int week_counter = 1;

    do{
    
        friends = (friends - week_counter) * 2;

        printf("Week %d you have %d friends\n", week_counter, friends);
        
        week_counter++;

    
    } while (friends <= DUNBAR);


    return 0;
}
    
