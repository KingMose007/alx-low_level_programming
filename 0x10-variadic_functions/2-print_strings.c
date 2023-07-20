#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - a code that prints strings followed by a new line
 * @separator: string to be printed between the strings
 * @n: number of strings passed to the function
 * @...: variable number of string arguments
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	const char *str;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(args, const char *);

		if (str == NULL)
			printf("(nil)");
		else
			printf("%s", str);

		if (separator != NULL && i != n - 1)
			printf("%s", separator);
	}

	printf("\n");

	va_end(args);
}
