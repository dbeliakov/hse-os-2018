#include <stdio.h>

int main()
{
    char* hello = "Hello, world";
    printf("%s\n", hello);
    ++hello;
    printf("%s\n", hello);

    // UB
    //*(hello + 11) = 1;
    //printf("%s\n", hello);
}
