#include <stdio.h>

int main(void) 
{
    int a = 33;
    int b = 15;
    int result = a + b;

    printf("result is %d\n", result);
    printf("result++ is %d\n", result++); // postfix
    printf("++result is %d\n", ++result); // prefix

    return 0;
}