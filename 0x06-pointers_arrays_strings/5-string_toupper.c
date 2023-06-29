#include <stdio.h>
#include <stdlib.h>

/**
 * string_toupper - changes lowercase letters of a string to the  uppercase
 * @s: string to be modified
 *
 * Return: pointer to the modified string
 */
char *string_toupper(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] >= 'a' && s[i] <= 'z')
			s[i] = s[i] - 'a' + 'A';
	}

	return (s);
}
