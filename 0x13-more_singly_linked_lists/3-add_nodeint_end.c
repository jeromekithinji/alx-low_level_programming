#include "lists.h"
#include <stdlib.h>

/**
  * add_nodeint_end - add a node at end of a linked list, listint_t.
  *
  * @head: double pointer to the head of the linked list
  * @n: value being assigned to the new node
  * Return: address of the new element or NULL if it failed
  */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newNode;
	listint_t *tempNode;

	if (head == NULL)
		return (NULL);
	newNode = malloc(sizeof(listint_t));

	if (newNode == NULL)
		return (NULL);
	newNode->n = n;
	newNode->next = NULL;

	if (*head == NULL)
	{
		*head = newNode;
		return (newNode);
	}

	tempNode = *head;
	while (tempNode->next != NULL)
	{
		tempNode = tempNode->next;
	}

	tempNode->next = newNode;
	return (newNode);
}

