 #include <stdio.h>

#define PAGES 999
int main(void)
{
    printf("%%d    -> \"%d\"\n", PAGES);
    printf("%%2d   -> \"%2d\"\n", PAGES);
    printf("%%010d -> \"%010d\"\n", PAGES);

    printf("%% 10d -> \"% 10d\"\n", PAGES);
    printf("%%-10d -> \"%-10d\"\n", PAGES);
    printf("%%+10d -> \"%+10d\"\n", PAGES);
    printf("%%-+10d -> \"%-+10d\"\n", PAGES);
    printf("%%10.5d -> \"%10.5d\"\n", PAGES);

    return 0;
}
