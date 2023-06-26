#include <stdio.h>

/**
 * puts_half - prints half of a particular string
 * @str: pointer to a string
 *
 * Return: void
 */
void puts_half(char *str)
{
	int length = 0;
	int i;

	while (str[length] != '\0')
	{
		length++;
	}

	for (i = (length + 1) / 2; i < length; i++)
	{
		putchar(str[i]);
	}
	putchar('\n');
}
