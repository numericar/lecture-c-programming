#include <stdio.h>

int main(void)
{
    int minute = 0;
    double years = 0.0;
    double days = 0.0;
    double minuteInYear = 0.0;

    printf("Please enter the number of minutes: ");
    scanf("%d", &minute);

    minuteInYear = (60 * 24 * 365);

    years = (minute / minuteInYear);
    days = (minute / 60.0) / 24.0;

    printf("%d minutes is approximately %f years and %f days\n", minute, years, days);

    return 0;
}