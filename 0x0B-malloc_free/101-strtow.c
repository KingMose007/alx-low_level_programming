#include "main.h"
#include <stdlib.h>

/**
 * word_count - counts words in a string
 * @str: string to count words in
 *
 * Return: number of words in the string
 */
int word_count(char *str)
{
	int i, wc = 0, state = 0;

	for (i = 0; str[i]; i++)
	{
		if (str[i] == ' ')
			state = 0;
		else if (state == 0)
		{
			state = 1;
			wc++;
		}
	}

	return (wc);
}

/**
 * strtow - splits a string into words
 * @str: string to split
 *
 * Return: pointer to an array of strings, or NULL if it fails
 */
char **strtow(char *str)
{
	char **words;
	int i, j, k, l, wc, len;

	if (str == NULL || str[0] == '\0')
		return (NULL);

	wc = word_count(str);
	if (wc == 0)
		return (NULL);

	words = malloc((wc + 1) * sizeof(char *));
	if (words == NULL)
		return (NULL);

	for (i = 0, k = 0; i < wc; i++)
	{
		while (str[k] == ' ')
			k++;

		for (j = k, len = 0; str[j] && str[j] != ' '; j++)
			len++;

		words[i] = malloc((len + 1) * sizeof(char));
		if (words[i] == NULL)
		{
			for (l = 0; l < i; l++)
				free(words[l]);
			free(words);
			return (NULL);
		}

		for (j = k, l = 0; str[j] && str[j] != ' '; j++, l++)
			words[i][l] = str[j];
		words[i][l] = '\0';

		k += len;
	}

	words[i] = NULL;

	return (words);
}
