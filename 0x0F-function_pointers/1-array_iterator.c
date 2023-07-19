#include "function_pointers.h"
#include <stdio.h>

/**
 * array_iterator - executes a function on each element array
 * @array: array to iterate over
 * @size: size of the array
 * @action: function to use on each element
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array && action)
	{
		for (i = 0; i < size; i++)
			action(array[i]);
	}
}
