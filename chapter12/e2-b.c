#include <stdio.h>
#include "e2.h"

static int mode;
static double distance;
static double fuel_consumed;

void set_mode(int newMode)
{
    if(newMode >= 0 && newMode <= 1)
        mode = newMode;
    else if( newMode > 1)
    {
        printf("Wrong choice. Assuming metric\n");
        mode = METRIC;
    }
}


void get_info(void)
{
    printf("Enter distance traveled in %s:", mode == METRIC ? "kilometers" : "miles");
    scanf("%lf", &distance);

    printf("Enter fuel consumedin  %s:", mode == METRIC ? "liters" : "gallons");
    scanf("%lf", &fuel_consumed);
}

void show_info(void)
{
    if(distance <= 0 || fuel_consumed <= 0)
    {
        printf("Error");
        return;
    }

    if(mode == METRIC)
    {
        printf("Fuel consumption is %.2lf liters per 100 km\n", fuel_consumed/distance * 100.);
    }
    else
    {
        printf("Fuel consumption is %.2lf miles per gallon\n", distance/fuel_consumed);
    }
}
