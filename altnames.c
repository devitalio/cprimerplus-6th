#include <stdio.h>
#include <inttypes.h>

int main(void)
{
    int32_t me32; //32 signed int

    me32=45933945;

    printf("First assume int32_t is int: ");
    printf("me32 = %d\n", me32);
    printf("Next, let's make no assumptions.\n");
    printf("Instead use the \"macro\" from inttypes.h: ");
    printf("me32 = %"PRId32 "\n", me32);

    printf("me32 in hex as long: %#x\n", me32);
    return 0;
}
