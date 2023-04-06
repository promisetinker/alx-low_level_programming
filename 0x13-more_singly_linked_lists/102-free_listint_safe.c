#include "lists.h"
#include <stdlib.h>

/**
 * free_listint_safe - Frees a listint_t list safely.
 * @h: A pointer to the head node of the list.
 *
 * Return: The number of nodes freed.
 **/
size_t free_listint_safe(listint_t **h)
{
	listint_t *current, *tmp;
	size_t count = 0;

	if (h == NULL)
		return (0);

	current = *h;

	while (current != NULL)
	{
		if (current < current->next)
		{
			tmp = current;
			current = current->next;
			free(tmp);
			count++;
		}
		else
		{
			free(current);
			count++;
			break;
		}
	}
	*h = NULL;
	return (count);
}
