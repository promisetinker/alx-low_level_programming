#include "lists.h"
#include <stdlib.h>

/**
 * reverse_listint - Reverses a listint_t linked list
 *
 * @head: Pointer to the head of the list
 *
 * Return: A pointer to the first node of the reversed list
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *current, *prev;

	if (head == NULL || *head == NULL)
		return (NULL);

	current = *head;
	prev = NULL;
	while (current != NULL)
	{
		*head = current->next;
		current->next = prev;
		prev = current;
		current = *head;
	}
	*head = prev;
	return (*head);
}
