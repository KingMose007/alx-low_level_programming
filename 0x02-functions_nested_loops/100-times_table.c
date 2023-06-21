#include "main.h"

/**
 * print_times_table - Prints the n times table
 * @n: The number of times to print the table
 *
 * Return: void
 */
void print_times_table(int n)
{
	int i;
	int j;
	int result;

	if (n >= 0 && n <= 15)
	{
		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= n; j++)
			{
				result = i * j;

				if (j == 0)
					_putchar('0');
				else if (result < 10)
				{
					_putchar(' ');
					_putchar(' ');
					_putchar(result + '0');
				}
				else if (result < 100)
				{
					_putchar(' ');
					_putchar(result / 10 + '0');
					_putchar(result % 10 + '0');
				}
				else
				{
					_putchar(result / 100 + '0');
					_putchar(result / 10 % 10 + '0');
					_putchar(result % 10 + '0');
				}

				if (j != n)
				{
					_putchar(',');
					_putchar(' ');
				}
			}

			_putchar('\n');
		}
	}
}
