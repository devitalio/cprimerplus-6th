#include <stdio.h>
#include <string.h>

#define DENSITY 1010 //kg per m3 

int main(void)
{
    float weight, volume;
    int size, letters;
    char name[40];

    printf("Hello. What is your name?\n");
    scanf("%s", name);
    printf("%s what's your weight in kg?\n", name);
    scanf("%f", &weight);
    
    size = sizeof(name);
    letters = strlen(name);

    volume = weight / DENSITY;

    printf("Well, %s, your volume is %2.2f m3\n", name, volume);
    printf("Also, your name has %d letters\n", letters);
    printf("And we got %d bytes to store it\n", size);
    
    return 0;
}
