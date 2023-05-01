#include <stdlib.h>
#include "lists.h"

/**
 * pop_listint - deletes the head node of a linked list
 *
 * @head: a double pointer to the head node
 * Return: value of the head node removed
 */

int pop_listint(listint_t **head)
{
	listint_t *firstN;
	int n;

	if (head == NULL || *head == NULL)
		return (0);

	firstN = *head;
	*head = firstN->next;
	n = firstN->n;
	free(firstN);
	return (n);
}
