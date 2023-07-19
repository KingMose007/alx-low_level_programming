#include "function_pointers.h"
#include <stdio.h>

/**
 * print_name - prints the name
 * @name: name to print
 * @f: function to use to print the name
 */
void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
