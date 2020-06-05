#include <stdio.h>

void up_and_down(int level);

int main(void)
{
    up_and_down(1);
    return 0;
}

void up_and_down(int level)
{
    printf("Level %d location %p\n", level, &level);
    if(level < 4)
        up_and_down(level+1);
    printf("LEVEL %d location %p\n",level, &level);

}
