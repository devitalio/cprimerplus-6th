#include <stdio.h>

int main(void)
{

    int input, even_total, even_count;
    int odd_total, odd_count;

    even_total = even_count = odd_total = odd_count = 0;


    while( scanf("%d",&input) == 1)
    {
        if(input == 0)
            break;

        if(input % 2 == 0)
        {
            even_total += input;
            even_count++;
        }
        else
        {
            odd_total += input;
            odd_count++;
        }
    }

    printf("%15s %15s %15s %15s\n", "even total", "even avg", "odd total", "odd avg");
    printf("%15d %15d %15d %15d\n", even_total, even_count > 0 ? even_total/even_count : 0, odd_total, odd_count > 0 ? odd_total/odd_count : 0);

    return 0;
}
