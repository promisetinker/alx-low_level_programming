#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/*
 * Define: the structure for a linked list nod
 */
listint_t *add_nodeint(listint_t **head, const int n);
{
	int n;
	struct listint_s *next;
}
listint_t;

/**
 * add_nodeint_end - Adds a new node at the end of a listint_t list
 * @head: A pointer to the head of the list
 * @n: The integer value to be stored in the new node
 *
 * Return: The address of the new element, or NULL if it failed
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node, *temp;
	/* Create a new node and check for memory allocation errors */
	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
	{
		return (NULL);
	}
}
