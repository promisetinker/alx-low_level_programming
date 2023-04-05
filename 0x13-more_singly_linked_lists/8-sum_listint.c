#include "lists.h"
#include <stdlib.h>

/**
 * sum_listint - Returnr the sum of all the data a listint_t linked list.
 * @head: Pointer to the head of the linked list.
 *
 * Return: The sum of all the data (n) in the linked list
 */

int sum_listint(listint_t *head)
{
	int sum = 0;

	/* Traverse the linked list and sum the data (n) of each node */
	while (head)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
