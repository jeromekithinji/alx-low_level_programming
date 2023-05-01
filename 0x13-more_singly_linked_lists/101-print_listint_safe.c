#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * _r - reallocates memory for an array of pointers to
 *	nodes in a linked list
 *
 * @list: array if pointers to nodes in the linked list
 * @size: size of the new linked list
 * @new: new node to add to the linked list
 * Return: pointer to the new linked list
 */

const listint_t **_r(const listint_t **list, size_t size, const listint_t *new)
{
	const listint_t **newlist;
	size_t a;

	newlist = malloc(size * sizeof(listint_t *));
	if (newlist == NULL)
	{
		free(list);
		exit(98);
	}
	for (a = 0; a < size - 1; a++)
		newlist[a] = list[a];
	newlist[a] = new;
	free(list);
	return (newlist);
}

/**
 * print_listint_safe - prints a linked list of integers
 *
 * @head: pointer to the start of the linked list
 * Return: number of nodes in the linked list
 */

size_t print_listint_safe(const listint_t *head)
{
	size_t a, numNodes = 0;
	const listint_t **list = NULL;

	while (head != NULL)
	{
		for (a = 0; a < numNodes; a++)
		{
			if (head == list[a])
			{
				printf("-> [%p] %d\n", (void *)head, head->n);
				free(list);
				return (numNodes);
			}
		}
		numNodes++;
		list = _r(list, numNodes, head);
		printf("[%p] %d\n", (void *)head, head->n);
		head = head->next;
	}
	free(list);
	return (numNodes);
}
