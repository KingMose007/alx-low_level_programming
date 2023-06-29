#include <stdio.h>
#include <stdlib.h>

/**
 * cap_string - function that capitalizes all words of a string
 * @s: string to be modified
 *
 * Return: pointer to the modified string
 */
char *cap_string(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (i == 0 && s[i] >= 'a' && s[i] <= 'z')
			s[i] = s[i] - 'a' + 'A';
		else if (s[i - 1] == ' ' && s[i] >= 'a' && s[i] <= 'z')
			s[i] = s[i] - 'a' + 'A';
	}

	return (s);
}
