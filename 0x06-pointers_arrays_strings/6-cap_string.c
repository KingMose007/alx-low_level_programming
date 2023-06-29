#include <stdio.h>
#include <stdlib.h>

/**
 * cap_string - it does capitalizes all words of a string
 * @s: string to be modified
 *
 * Return: pointer to the modified string
 */
char *cap_string(char *s)
{
	int i, j;
	char separators[] = " \t\n,;.!?\"(){}";

	for (i = 0; s[i] != '\0'; i++)
	{
		if (i == 0 && s[i] >= 'a' && s[i] <= 'z')
			s[i] = s[i] - 'a' + 'A';
		else
		{
			for (j = 0; separators[j] != '\0'; j++)
			{
				if (s[i - 1] == separators[j] && s[i] >= 'a' && s[i] <= 'z')
				{
					s[i] = s[i] - 'a' + 'A';
					break;
				}
			}
		}
	}

	return (s);
}
