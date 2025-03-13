#include <stdio.h>

void modifyValue(int *x)
{
    *x = 50; // Change the value at the memory location pointed to by x
}

int main()
{
    int y = 10;
    printf("Before calling modifyValue: %d\n", y);

    modifyValue(&y); // Pass the address of y to the function

    printf("After calling modifyValue: %d\n", y);
    return 0;
}
