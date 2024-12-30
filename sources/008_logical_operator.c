#include <stdio.h>

int main(void) 
{
    int a = 12;
    int b = 20;
    _Bool result = a < b;

    printf("Result: %i", result);
    printf("!Result: %i", !result);

    return 0;
}