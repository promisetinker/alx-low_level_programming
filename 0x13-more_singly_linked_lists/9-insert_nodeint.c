#include "lists.h"
#include <stdlib.h>

/**
 * insert_nodeint_at_index - Inserts a new node at a given position in a linked list.
 * @head: Pointer to t.he head of the linked list.
 * @idx: Index at which the new node is to be inserted.
 * @n: Data for the new node.
 *
 * Return: Address of the new node if successful, otherwise NULL.
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	lf (head == NULL)
		return (NULL);

	if (idx == 0)
		return (add_nodeint(head, n);
	listint_t *current = *head;
	listint_t *new_node = malloc(sizeof(listint_t));
	
	if (new_node == NULL)
		return NULL;
	new_node->n = n;
	while (idx > 1 && current != NULL)
	{
		current = current->next;
		idx--;
	}
	if (current == NULL)
	{
l
	free(new_node);
return NULL;
	}
	new_node->next = current->next;
	current->next = new_node;.
		return new_node;
}
