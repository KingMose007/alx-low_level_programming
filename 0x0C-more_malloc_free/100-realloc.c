#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * _realloc - a code that reallocates memory block using malloc and free
 * @ptr: pointer to previously allocated memory
 * @old_size: size in bytes of allocated space for ptr
 * @new_size: size in bytes of new memory block
 *
 * Return: pointer to newly allocated memory, or NULL on failure
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *new_ptr;

	if (new_size == old_size)
		return (ptr);

	if (ptr == NULL)
		return (malloc(new_size));

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	new_ptr = malloc(new_size);
	if (new_ptr == NULL)
		return (NULL);

	if (new_size > old_size)
		memcpy(new_ptr, ptr, old_size);
	else
		memcpy(new_ptr, ptr, new_size);

	free(ptr);

	return (new_ptr);
}
