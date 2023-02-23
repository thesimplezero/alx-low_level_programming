#include "main.h"

/**
* print_remaining_days - takes a date and prints how many days are
* left in the year, taking leap years into account
* @month: month in number format
* @day: day of month
* @year: year
* Return: void
*/

void print_remaining_days(int month, int day, int year)
{
int days_in_month[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
int total_days = 0;
int i;

/* Calculate the total number of days in the year */
for (i = 1; i < month; i++)
{
total_days += days_in_month[i];

if (i == 2 && (year % 4 == 0 && (year % 100 != 0 || year % 400 == 0)))
{
total_days++; /* Add an extra day for leap year */
}
}
total_days += day;

if ((year % 4 == 0 && (year % 100 != 0 || year % 400 == 0)) && month > 2)
{
total_days++; /* Add an extra day for leap year */
}

if ((year % 4 == 0 && (year % 100 != 0 || year % 400 == 0))
&& total_days > 366)
{
printf("Invalid date: %02d/%02d/%04d\n", month, day - 1, year);
}
else if (total_days > 365)
{
printf("Invalid date: %02d/%02d/%04d\n", month, day - 1, year);
}
else
{
printf("Day of the year: %d\n", total_days);
printf("Remaining days: %d\n", (year % 4 == 0 &&
(year % 100 != 0 || year % 400 == 0)) ? 366 - total_days : 365 - total_days);
}
}
