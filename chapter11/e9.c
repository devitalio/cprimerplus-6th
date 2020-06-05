#include <stdio.h>
#include <string.h>

void swap(char * a, char * b)
{
    char tmp;

    tmp = *a;
    *a = *b;
    *b = tmp;
}

void reverse(char * s1)
{
    char * end = s1 + strlen(s1) -1;

    while(s1 < end)
    {
        swap(s1, end);
        s1++;
        end--;
    }
}

int main(void)
{
    char buf[] = "Hell";

    reverse(buf);
    printf("%s\n", buf);
    return 0;
}
