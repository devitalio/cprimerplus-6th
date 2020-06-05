#include <stdio.h>
#include "e3.h"

void get_info(int mode, double* distance, double* fuel_consumed)
{
    printf("Enter distance traveled in %s:", mode == METRIC ? "kilometers" : "miles");
    scanf("%lf", distance);

    printf("Enter fuel consumedin  %s:", mode == METRIC ? "liters" : "gallons");
    scanf("%lf", fuel_consumed);
}

void show_info(int mode, double distance, double fuel_consumed)
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
