#include <stdio.h>

const char * find(const char *ar, char token)
{
    while(*ar++)
    {
        if(*ar == token)
            return ar-1;
    }
    return NULL;

}

int main(void)
{
    char * testcases[] = { "", " ", "test"};

    for(int i = 0; i < 3; i++)
        printf("%p\n", find(testcases[i], 't'));


    printf("%s\n", find("test", 'e'));
    return 0;
}
