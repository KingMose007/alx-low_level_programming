#include <stdio.h>
#include <stdlib.h>

int _putchar(char c);

/**
 * print_int - prints an integer as dem tell me
 * @n: integer to be printed
 *
 * Return: void
 */
void print_int(int n)
{
	int div, num;

	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}

	num = n;
	div = 1;
	while (num / 10 > 0)
	{
		div *= 10;
		num /= 10;
	}

	while (div >= 1)
	{
		_putchar(n / div + '0');
		n %= div;
		div /= 10;
	}
}

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
