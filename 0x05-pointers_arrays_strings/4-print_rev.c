#include <stdio.h>

/**
 * print_rev - prints a string in reverse, followed by a new line
 * @s: pointer to a string
 *
 * Return: void
 */
void print_rev(char *s)
{
	int length = 0;

	while (s[length] != '\0')
	{
		length++;
	}

	while (length > 0)
	{
		putchar(s[length - 1]);
		length--;
	}
	putchar('\n');
}
