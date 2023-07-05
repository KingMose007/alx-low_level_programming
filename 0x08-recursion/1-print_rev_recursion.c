#include <unistd.h>

/**
 * _putchar - writes the character c
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

/**
 * _strlen_recursion - returns the length of a string
 * @s: string to find the length of
 *
 * Return: length of string
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	else
		return (1 + _strlen_recursion(s + 1));
}

/**
 * print_string_rev - prints a string in reverse
 * @str: the string to print
 *
 * Return: void
 */
void print_string_rev(char *str)
{
	int len = _strlen_recursion(str);

	if (len > 0)
	{
		_putchar(*(str + len - 1));
		*(str + len - 1) = '\0';
		print_string_rev(str);
	}
}

