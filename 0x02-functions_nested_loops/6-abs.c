#include "main.h"

/**
 * _abs - Computes the absolute value a given integer
 * @n: The integer to be computed
 *
 * Return: The absolute value of n
 */
int _abs(int n)
{
	if (n < 0)
		return (-n);
	else
		return (n);
}
