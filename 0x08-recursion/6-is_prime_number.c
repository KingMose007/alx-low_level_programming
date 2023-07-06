#include "main.h"
#include <stdio.h>

/**
 * is_prime_number - checks if a number is prime number
 * @n: the number to check
 *
 * Return: 1 if n is prime, otherwise 0
 */
int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	return (_is_prime_helper(n, 2));
}
