#include "function_pointers.h"

/**
 * print_name - prints the name
 * @name: name to print
 * @f: function to use to print the name
 *
 * Return: always nothing
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
}
