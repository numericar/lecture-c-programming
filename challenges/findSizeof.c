#include <stdio.h>

int main(void)
{
    printf("variable of type char %i\n", sizeof(char));
    printf("variable of type short %i\n", sizeof(short));
    printf("variable of type int %i\n", sizeof(int));
    printf("variable of type long %i\n", sizeof(long));
    printf("variable of type long long %i\n", sizeof(long long));
    printf("variable of type float %i\n", sizeof(float));
    printf("variable of type double %i\n", sizeof(double));
    printf("variable of type long double %i\n", sizeof(long double));

    return 0;
}