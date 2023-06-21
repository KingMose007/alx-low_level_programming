#include "main.h"

/**
 * print_times_table - Prints the n times table
 * @n: The number of times to print the table
 *
 * Return: void
 */
void print_times_table(int n)
{
	int i, j;

	if (n >= 0 && n <= 15)
	{
		for (i = 0; i <= n; i++)
		{
			_putchar('0');

			for (j = 1; j <= n; j++)
			{
				if ((i * j) < 10)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar('0' + i * j);
				}
				else if ((i * j) >= 10 && (i * j) < 100)
				{
					_putchar(',');
					_putchar(' ');
					_putchar('0' + (i * j) / 10);
					_putchar('0' + (i * j) % 10);
				}
				else if ((i * j) >= 100)
				{
					_putchar(',');
					_putchar(' ');
					_putchar('0' + (i * j) / 100);
					_putchar('0' + ((i * j) / 10) % 10);
					_putchar('0' + (i * j) % 10);
				}
			}

			_putchar('\n');
		}
	}
}
