#include <stdlib.h>
#include "lists.h"

/**
 * free_listint_safe - the code frees a listint_t list
 * @h: pointer to the head of the list
 *
 * Return: the size of the list that was freed
 */
size_t free_listint_safe(listint_t **h)
{
	size_t count = 0;
	listint_t *temp, *slow, *fast;

	if (h == NULL || *h == NULL)
		return (0);

	slow = *h;
	fast = *h;

	while (slow && fast && fast->next)
	{
		slow = slow->next;
		fast = fast->next->next;

		if (slow == fast)
		{
			do {
				temp = slow;
				slow = slow->next;
				free(temp);
				count++;
			} while (slow != fast);

			*h = NULL;
			return (count);
		}
	}

	while (*h != NULL)
	{
		temp = (*h)->next;
		free(*h);
		*h = temp;
		count++;
	}

	*h = NULL;
	return (count);
}
