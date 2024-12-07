#include <stdio.h>

int main() {
    int myFavoriteNumber = 0;
    
    printf("Please enter your favorite number\n"); // show text on console
    scanf("%d", &myFavoriteNumber); // get input from user keyboard
    printf("Your enterred number: %d\n", myFavoriteNumber);
    
    return 0;
}