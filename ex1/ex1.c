#include <stdio.h>

int main()
{
    int minutes = 0;
    int minutesInYear = 60 * 24 * 365;
    double years = 0.0;
    double days = 0.0;

    printf("enter minutes to convert to days and years:  ");
    scanf("%d", &minutes);
    years = minutes / minutesInYear;
    days = minutes / 60.0 / 24.0;

    printf("yay\n years: %f\n days: %f\n", years, days);
    return 0;
}