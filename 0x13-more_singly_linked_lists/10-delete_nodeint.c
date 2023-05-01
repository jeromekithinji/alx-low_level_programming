#include <stdlib.h>
#include "lists.h"

/**
 * delete_nodeint_at_index - deletes a node at index in a linked list
 *
 * @head: double pointer the head of the linked list
 * @index: index of node to be deleted
 * Return: 1 if node deleted or -1 if deletion unsuccessful
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int a;
	listint_t *tempNode, *next;

	if (head == NULL || *head == NULL)
		return (-1);
	if (index == 0)
	{
		next = (*head)->next;
		free(*head);
		*head = next;
		return (1);
	}
	tempNode = *head;
	for (a = 0; a < index - 1; a++)
	{
		if (tempNode->next == NULL)
			return (-1);
		tempNode = tempNode->next;
	}
	next = tempNode->next;
	tempNode->next = next->next;
	free(next);
	return (1);

}

