#include "main.h"

/**
 * _strlen_recursion - return length of string
 * @s: the string to count
 *
 * return: integer value
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	s++;
	return (_strlen_recursion(s) +1);
}
