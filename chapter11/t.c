#include <node/zlib.h>
#include <stdio.h>

int main(void)
{
    printf("%s", zlibVersion());
    return 0;
}
