#include "lists.h"

/**
 * get_nodeint_at_index - finds the pointer to the node at
 *			a given index in a linked list.
 *
 * @head: pointer to the first node of the linked list
 * @index: the index of the node to be returned
 * Return: pointer to the node of the index or NULL
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int a;

	if (head == NULL)
		return (NULL);
	for (a = 0; a < index; a++)
	{
		head = head->next;
		if (head == NULL)
			return (NULL);
	}
	return (head);
}
