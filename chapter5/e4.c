#include <stdio.h>

#define PROMPT "Enter a height in centimeters (<= 0 to quit): "
#define CMINFEET 30.48
#define CMININCH 2.54

int main(void)
{
    float input;
    printf("%s", PROMPT);
    scanf("%f", &input);

    while(input > 0) {
        int feet = input / CMINFEET;
        float remainder = input - (feet * CMINFEET); 
        printf("%.1f cm = %d feet %.1f inches\n", input, feet, remainder / CMININCH);
        printf("%s", PROMPT);
        scanf("%f", &input);
    }
    return 0;


}
