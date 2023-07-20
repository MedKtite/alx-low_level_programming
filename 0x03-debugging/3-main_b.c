#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    int month;
    int day;
    int year;

    month = 12;
    day = 31;
    year = 2023;

    printf("Date: %02d/%02d/%04d\n", month, day, year);
    printf("Day of the year: %d\n", convert_day(month, day, year));
    print_remaining_days(month, day, year);

    return (0);
}
