#include "main.h"
#include <stdio.h>

/**
 * is_prime_number - checks if an integer is prime number
 * @n: the integer to check
 *
 * Return: 1 if n is prime, otherwise 0
 */
int is_prime_number(int n)
{
	int i;

	if (n <= 1)
		return (0);
	for (i = 2; i < n; i++)
		if (n % i == 0)
			return (0);
	return (1);
}
