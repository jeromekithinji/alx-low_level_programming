#include "lists.h"
#include <stdlib.h>

/**
  * add_nodeint - add a new node at beginning
  *		of a linked list, listint_t.
  *
  * @head: a double pointer to the first node of the linked list
  * @n: data that the new node holds
  * Return: address of the new element or
  *	NULL if it fails
  */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *ptr;

	if (head == NULL)
		return (NULL);

	ptr = malloc(sizeof(listint_t));

	if (ptr == NULL)
		return (NULL);

	ptr->n = n;
	ptr->next = *head;
	*head = ptr;
	return (ptr);
}
