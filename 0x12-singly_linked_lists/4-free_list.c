#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
  * free_list - Frees a linked list.
  *
  * @head: Pointer to the first node of a linked list
  * Return: Void
  */

void free_list(list_t *head)
{
	list_t *tempN;

	while (head)
	{
		tempN = head;
		head = head->next;
		free(tempN->str);
		free(tempN);
	}

	free(head);
}

