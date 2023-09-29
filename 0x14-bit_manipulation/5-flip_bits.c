#include "main.h"

/**
 * flip_bits - Returns number of bits you need to flip
 * one number to another
 * @n: First number
 * @m: Second number
 *	
 * Return: The number of bits you would need to flip to get from n to m
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor = n ^ m;
	unsigned int count = 0;

	while (xor)
	{
		count += xor & 1;
		xor >>= 1;
	}

	return (count);
}
