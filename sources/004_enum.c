#include <stdio.h>

int main(void) {
    enum gender { male, femail }; // create enum

    enum gender myGender; // declare enum variable

    myGender = male; // assign 'male' to emum

    printf("%d", myGender);

    char u = 'a';
    printf("%c", u);

    return 0;
}