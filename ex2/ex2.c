#include <stdio.h>

int main()
{
    enum Weekday
    {
        mon,
        tue,
        wed,
        thur,
        fri,
        sat,
        sun
    };
    enum Weekday today = sat;

    switch (today)
    {
    case mon:
        printf("today is monday");
        break;
    case tue:
        printf("today is tuesday");
        break;
    case wed:
        printf("today is wednesday");
        break;
    case thur:
        printf("today is thursday");
        break;
    case fri:
        printf("today is friday");
        break;
    default:
        printf("today is the weekend");
        break;
    }

    printf("\n");

    return 0;
}