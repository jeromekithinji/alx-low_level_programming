#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
  * list_len - Return the number of elements of a linked list
  *
  * @h: A linked list
  * Return: Number of elements of a list
  */

size_t list_len(const list_t *h)
{
	size_t elementCount = 0;

	while (h)
	{
		h = h->next;
		elementCount++;
	}

	return (elementCount);
}
