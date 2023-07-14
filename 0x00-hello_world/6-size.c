Apologies for the oversight. To ensure the correct output for a 32-bit or 64-bit machine, we need to modify the format specifier used in the `printf` statements. Here's an updated version of the program that handles both cases:

```c
#include <stdio.h>

int main(void)
{
    printf("Size of char: %lu byte(s)\n", sizeof(char));
    printf("Size of short: %lu byte(s)\n", sizeof(short));
    printf("Size of int: %lu byte(s)\n", sizeof(int));
    printf("Size of long: %lu byte(s)\n", sizeof(long));
    printf("Size of long long: %lu byte(s)\n", sizeof(long long));
    printf("Size of float: %lu byte(s)\n", sizeof(float));
    printf("Size of double: %lu byte(s)\n", sizeof(double));
    printf("Size of long double: %lu byte(s)\n", sizeof(long double));

return 0;
}
