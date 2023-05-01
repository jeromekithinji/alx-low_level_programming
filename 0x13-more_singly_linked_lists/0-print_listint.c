#include <stdio.h>
#include "lists.h"

/**
 * print_listint - prints all the elements of a linked list, listint_t.
 *
 * @h: head of linked list node
 * Return: the number of nodes
 */

size_t print_listint(const listint_t *h)
{
	const listint_t *currentNode = h;
	size_t nodeCount = 0;

	while (currentNode)
	{
		printf("%i\n", currentNode->n);
		nodeCount++;
		currentNode = currentNode->next;
	}

	return (nodeCount);
}
