#include <stdio.h>
#include <stdlib.h>

/**
 * _strncat - a code that concatenates two strings
 * @dest: destination string
 * @src: source string
 * @n: maximum number of characters to be appended
 *
 * Return: pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	for (i = 0; dest[i] != '\0'; i++)
		;
	for (j = 0; j < n && src[j] != '\0'; j++)
		dest[i + j] = src[j];
	dest[i + j] = '\0';

	return (dest);
}
