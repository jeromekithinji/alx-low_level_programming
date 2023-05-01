#include <stdlib.h>
#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node with a given value
 *			at a specific index in a linked list
 *
 * @head: double pointer to the head of the linked list
 * @idx: index to insert the new node into
 * @n: value to be stored into the new node
 * Return: pointer to the new node in the linked list
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int a;
	listint_t *temp, *new;

	if (head == NULL)
		return (NULL);

	if (idx != 0)
	{
		temp = *head;
		for (a = 0; a < idx - 1 && temp != NULL; a++)
		{
			temp = temp->next;
		}
		if (temp == NULL)
			return (NULL);
	}
	new = malloc(sizeof(listint_t));

	if (new == NULL)
		return (NULL);
	new->n = n;

	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}
	new->next = temp->next;
	temp->next = new;
	return (new);
}
