#include <stdio.h>
#include <time.h>

int main()
{
    time_t t;
    struct tm *current;

    time(&t);
    current = localtime(&t);

    printf("Current Date: %02d/%02d/%04d\n",
           current->tm_mday,
           current->tm_mon + 1,
           current->tm_year + 1900);

    return 0;
}
