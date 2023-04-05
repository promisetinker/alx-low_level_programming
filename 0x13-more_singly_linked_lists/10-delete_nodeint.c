#include "lists.h"
#include <stdlib.h>

#include "lists.h"

/**
 * delete_nodeint_at_index - Deletes the node at a given position
 *
 * @head: Pointer to the head of the list
 * @index: Index of the node that should be deleted
 *
 * Return: 1 if it succeeded, -1 if it failed
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp, *prev;
	unsigned int i;

	if (head == NULL || *head == NULL)
		return (-1);

	if (index == 0)
	{
		temp = *head;
		*head = (*head)->next;
		free(temp);
		return (1);
	}
	prev = NULL;
	temp = *head;
	i = 0;

	while (temp != NULL)
	{
		if (i == index)
		{
			prev->next = temp->next;
			free(temp);
			return (1);
		}
		prev = temp;
		temp = temp->next;
		i++;
	}
	return (-1);
}
