#include <stdio.h>
#include <stdlib.h>

/**
 * _strncpy - as it copies a string
 * @dest: destination string
 * @src: source string
 * @n: maximum number of characters to be copied from src
 *
 * Return: pointer to the destination string dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	for (; i < n; i++)
		dest[i] = '\0';

	return (dest);
}
