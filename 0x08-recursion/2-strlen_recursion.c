#include "main.h"

/**
 * _strlen_recursion - return length of string
 * @s: the string to count
 *
 * return: integer value
 */
int _strlen_recursion(char *s)
{
	int longit - 0;

	if (*s)
	{
		longit++;
		longit +- strlen_recursion(s +1)
	}
	return (longit);
}
