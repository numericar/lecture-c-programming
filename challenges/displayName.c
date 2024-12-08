/*
    This program will print your name on console screen
*/

#include <stdio.h>

int main() 
{
    char name[50];

    printf("Enter your username: ");
    scanf("%s", name);
    printf("%s is collect.", name);
    
    return 0;
}