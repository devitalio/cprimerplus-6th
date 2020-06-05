 #include <stdio.h>

#define BASE 10
#define OVERTIME_RATE BASE * 1.5
#define FIRST_BREAK 0.15
#define SECOND_RATE 0.2
#define THIRD_RATE 0.25

int main(void)
{
    unsigned hours;
    double tax, gross;

    printf("Enter hours worked this week: ");
    if(scanf("%d", &hours) != 1) return 0;
    
    if(hours <= 40)
    {
        gross = hours * BASE;
    }
    else
    {
        gross = 40 * BASE + (hours - 40) * OVERTIME_RATE;
    }

    if(gross <= 300)
    {
        tax = gross * FIRST_BREAK;
    }
    else if(gross <= 300 + 150)
    {
        tax = 300 * FIRST_BREAK + (gross - 300) * SECOND_RATE;
    }
    else
    {
        tax = 300 * FIRST_BREAK + 150 * SECOND_RATE + (gross - 150 - 300) * THIRD_RATE;
    }

    printf("%10.2f %10.2f %10.2f\n", gross, tax, gross-tax);
    return 0;
}

    
