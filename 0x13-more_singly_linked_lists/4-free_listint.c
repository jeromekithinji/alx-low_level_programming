#include "lists.h"
#include <stdlib.h>

/**
 * free_listint - frees the memory allocated for each node
 *		in the list
 *
 * @head: a pointer to the head of the linked list
 */

void free_listint(listint_t *head)
{
	listint_t *next;

	while (head != NULL)
	{
		next = head->next;
		free(head);
		head = next;
	}
}
