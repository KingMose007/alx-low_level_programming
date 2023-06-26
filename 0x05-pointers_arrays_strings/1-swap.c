#include <stdio.h>

/**
 * swap_int - swaps two integers
 * @a: pointer to an int
 * @b: pointer to an int
 *
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
