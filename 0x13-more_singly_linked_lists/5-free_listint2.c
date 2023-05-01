#include "lists.h"
#include <stdlib.h>

/**
 * free_listint2 - frees a linked list of integers and sets
 *		sets the head to null
 *
 * @head: a double pointer to head node
 */

void free_listint2(listint_t **head)
{
	listint_t *next;

	if (head == NULL)
		return;

	while (*head != NULL)
	{
		next = (*head)->next;
		free(*head);
		*head = next;
	}
}
