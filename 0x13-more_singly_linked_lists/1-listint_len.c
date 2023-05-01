#include "lists.h"

/**
 * listint_len - the number of elements in the
 *		given linked list, listint_t.
 *
 * @h: the head pointer
 * Return: the number of elements in the linked list
 *
 */

size_t listint_len(const listint_t *h)
{
	size_t numOfElements = 0;

	while (h != NULL)
	{
	h = h->next;
		numOfElements++;
	}
	return (numOfElements);
}
