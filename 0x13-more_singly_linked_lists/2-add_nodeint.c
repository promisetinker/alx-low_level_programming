#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint - Adds a new node at the beginning of a listint_t list
 * @head: Pointer to a pointer to the first node of the list
 * @n: Value of the integer to store in the new node
 *
 * Return: Address of the new node or NULL if it failed
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	/* Create a new node with malloc */
	listint_t *new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)

		return (NULL);

	/* Set the value of the new node */
	new_node->n = n;

	/* Make the new node point to the old head of the list */
	new_node->next = *head;

	/* Make the head of the list point to the new node */
	*head = new_node;

	return (new_node);
}
