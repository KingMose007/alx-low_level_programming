#include "main.h"

/**
 * print_sign - Prints sign of a particular number
 * @n: The number to be checked
 *
 * Return: 1 if n is positive, -1 if n is negative, 0 otherwise
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
