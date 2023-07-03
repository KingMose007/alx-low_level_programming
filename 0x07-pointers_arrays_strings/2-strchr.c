#include "main.h"
#include <stdio.h>

/**
 * _strchr - locates a character in a string
 * @s: input
 * @c: input
 *
 * Return: pointer to the first occurrence of c in s, or NULL if not found
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] >= '\0'; i++)
	{

		if (s[i] == c)
			return (s + i);
	}

	return (NULL);
}
