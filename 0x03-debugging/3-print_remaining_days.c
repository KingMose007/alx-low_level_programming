#include <stdio.h>
#include "main.h"

#define DAYS_IN_YEAR 365

int is_leap_year(int year) {
	return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}

int days_in_month(int month, int year) {
	switch (month) {
		case 2:
			return is_leap_year(year) ? 29 : 28;
		case 4:
		case 6:
		case 9:
		case 11:
			return 30;
		default:
			return 31;
	}
}

int day_of_year(int day, int month, int year) {
	int i, days = day;
	for (i = 1; i < month; i++) {
		days += days_in_month(i, year);
	}
	return days;
}

int days_left_in_year(int day, int month, int year) {
	return is_leap_year(year) ? DAYS_IN_YEAR + 1 - day_of_year(day, month, year) : DAYS_IN_YEAR - day_of_year(day, month, year);
}

int main() {
	int day, month, year;
	printf("Enter date (MM/DD/YYYY): ");
	scanf("%d/%d/%d", &month, &day, &year);
	printf("Day of year: %d\n", day_of_year(day, month, year));
	printf("Days left in the year: %d\n", days_left_in_year(day, month, year));
	return EXIT_SUCCESS;
}
