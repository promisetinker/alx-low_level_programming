#include "lists.h"
#include <stdlib.h>

/**
 * struct listint_s - singly linked list
 * @n: integer
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 * for Holberton project
 */
typedef struct listint_s
{
	int n;
	struct listint_s *next;
} listint_t;

/**
 * delete_nodeint_at_index - deletes the node at index of a linked list
 * @head: double pointer to the head of the linked list
 * @index: index of the node to be deleted (starts at 0)
 *
 * Return: 1 if succeeded, -1 if failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	if (head == NULL || *head == NULL)
		return (-1);

	listint_t *current = *head;
	listint_t *previous = NULL;
	unsigned int i = 0;

	while (current != NULL && i < index)
	{
		previous = current;
		current = current->next;
		i++;
	}

	if (current == NULL)
		return (-1);

	if (previous == NULL)
		*head = current->next;
	else
		previous->next = current->next;

	free(current);

	return (1);
}
