#include "main.h"

/**
 * _memset - fills memory with const byte
 * @s: pointer to the block of memory to fill
 * @b: value to set
 * @n: number of bytes to be set to the value
 *
 * Return: pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;

	return (s);
}
