#include <stdio.h>

int main()
{
    int year, totalDays = 0, i;
    char *day[] = {
        "Monday",
        "Tuesday",
        "Wednesday",
        "Thursday",
        "Friday",
        "Saturday",
        "Sunday"
    };

    printf("Enter year: ");
    scanf("%d", &year);

    for(i = 1900; i < year; i++)
    {
        if((i % 400 == 0) || (i % 4 == 0 && i % 100 != 0))
            totalDays += 366;
        else
            totalDays += 365;
    }

    printf("1st January %d is %s\n", year, day[totalDays % 7]);

    return 0;
}
