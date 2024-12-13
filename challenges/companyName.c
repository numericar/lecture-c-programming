#include <stdio.h>

int main(void) {
    enum company { GOOGLE, FACEBOOK, XEROX, YAHOO, EBAY, MICROSOFT };

    enum company com1 = XEROX;
    enum company com2 = GOOGLE;
    enum company com3 = EBAY;

    printf("%d\n%d\n%d", com1, com2, com3);
    
    return 0;
}