#include <stdio.h>
#include <stdlib.h>

/**
 * _strcpy - a code that copies the string pointed to by src to the buffer pointed to by dest
 * @dest: destination string
 * @src: source string
 *
 * Return: pointer to the destination string dest
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
		dest[i] = src[i];
	dest[i] = '\0';

	return (dest);
}
