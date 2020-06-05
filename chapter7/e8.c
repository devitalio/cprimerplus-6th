#include <stdio.h>

#define OVERTIME_RATE  1.5
#define FIRST_BREAK 0.15
#define SECOND_RATE 0.2
#define THIRD_RATE 0.25

int main(void)
{
    int choice, hours;
    double rate, tax, gross;

    do {
        printf("*****************************************************************\n");
        printf("Enter the number corresponding to the desired pay rate or action:\n");
        printf("1) 8.75$                            2) 9.33$\n");
        printf("3) 10.00$                           4) 11.20$\n");
        printf("5) quit\n");
        printf("*****************************************************************\n");

        while(scanf("%d", &choice) != 1) {
            getchar();
            printf("wrong choice, try again\n");
            continue;
        }

        if(choice == 5) {
            printf("Done\n");
            return 0;
        }

        switch(choice){
            case 1:
                rate = 8.75;
                break;
            case 2:
                rate = 9.33;
                break;
            case 3:
                rate = 10.00;
                break;
            case 4:
                rate = 11.20;
                break;
            default:
                printf("Wrong choice, try again\n");
                continue;
        }

        printf("Enter hours worked this week:");
        scanf("%d", &hours);

        if(hours <= 40)
        {
            gross = hours * rate;
        }
        else
        {
            gross = 40 * rate + (hours - 40) * (rate * OVERTIME_RATE);
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

        printf("%10s %10s %10s\n", "gross", "tax", "net");
        printf("%10.2f %10.2f %10.2f\n", gross, tax, gross-tax);



    }while(1);

    printf("\n");
    return 0;
}
