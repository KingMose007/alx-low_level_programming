#include "main.h"

/**
 * set_string - sets value of a pointer to a char
 * @s: pointer to the pointer to set
 * @to: pointer to the value to set
 *
 * Return: void
 */
void set_string(char **s, char *to)
{
	*s = to;
}
