#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * _ra - reallocates memory for an array of pointers to nodes
 *	in a linked list
 *
 * @list: pointer to the old linked list to append
 * @size: size of the new linked list
 * @new: new node to add to the linked list
 * Return: pointer to the new list
 */

listint_t **_ra(listint_t **list, size_t size, listint_t *new)
{
	listint_t **newList;
	size_t a;

	newList = malloc(size * sizeof(listint_t *));
	if (newList == NULL)
	{
		free(list);
		exit(98);
	}
	for (a = 0; a < size - 1; a++)
		newList[a] = list[a];
	newList[a] = new;
	free(list);
	return (newList);
}

/**
 * free_listint_safe - frees a linked list
 *
 * @head: double pointer to the first node
 *	of the linked list
 * Return: number of nodes in the linked list
 */

size_t free_listint_safe(listint_t **head)
{
	size_t a, numNodes = 0;
	listint_t **freeList = NULL;
	listint_t *next;

	if (head == NULL || *head == NULL)
		return (numNodes);
	while (*head != NULL)
	{
		for (a = 0; a < numNodes; a++)
		{
			if (*head == freeList[a])
			{
				*head = NULL;
				free(freeList);
				return (numNodes);
			}
		}
		numNodes++;
		freeList = _ra(freeList, numNodes, *head);
		next = (*head)->next;
		free(*head);
		*head = next;
	}
	free(freeList);
	return (numNodes);
}
