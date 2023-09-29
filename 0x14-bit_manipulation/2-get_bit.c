#include "main.h"

/**
 * get_bit - Returns the value of a bit
 * @n: Number to get the bit from
 * @index: Index of the bit to get, starting from 0
 *
 * Return: The value of the bit at index index, or -1 if an error occurred
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index > (sizeof(n) * 8))
		return (-1);

	return ((n >> index) & 1);
}
