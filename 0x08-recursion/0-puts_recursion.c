#include <unistd.h>

/**
 * _putchar -  it do writes the character c to stdout
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
 * print_string - prints a string followed by a new line
 * @str: the string to print
 *
 * Return: void
 */
void print_string(char *str)
{
	if (*str)
	{
		_putchar(*str);
		print_string(str + 1);
	}
	else
		_putchar('\n');
}
