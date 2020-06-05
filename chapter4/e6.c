#include <stdio.h>
#include <string.h>

int main(void)
{
    char firstName[256];
    char lastName[256];


    printf("Enter your first name: ");
    scanf("%s", firstName);

    printf("Enter your last name: ");
    scanf("%s", lastName);
   
    int firstNamelenght = strlen(firstName);
    int lastNameLenght = strlen(lastName);

    printf("%s %s\n", firstName, lastName);
    printf("%*d %*d\n", firstNamelenght, firstNamelenght, lastNameLenght, lastNameLenght);

    printf("%s %s\n", firstName, lastName);
    printf("%-*d %-*d\n", firstNamelenght, firstNamelenght, lastNameLenght, lastNameLenght);



    return 0;
}
