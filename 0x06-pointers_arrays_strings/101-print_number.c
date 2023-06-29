#include <stdio.h>
#include <stdlib.h>

/**
 * print_number - it dey prints an integer
 * @n: integer to be printed
 *
 * Return: void
 */
void print_number(int n)
{
	int i, j, div, num;

	if (n < 0)
	{
		putchar('-');
		n = -n;
	}

	num = n;
	div = 1;
	while (num / 10 > 0)
	{
		div *= 10;
		num /= 10;
	}

	for (i = div; i >= 1; i /= 10)
	{
		j = n / i;
		putchar(j + '0');
		n -= j * i;
	}
}
