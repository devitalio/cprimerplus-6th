#include <stdio.h>

int main(void)
{
    int height;

    printf("Enter height in cm: ");
    scanf("%d", &height);
    printf("Your heigh in inches is %f\n", height * 2.54);

    return 0;
}
