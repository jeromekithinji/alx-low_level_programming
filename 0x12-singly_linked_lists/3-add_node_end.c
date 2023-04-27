#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_node_end - adds a new node at the end of a linked list
 *
 * @head: Node at the beginning of the linked list
 * @str: String to be put in the new node
 * Return: Pointer to the new node or NULL
 */

list_t *add_node_end(list_t **head, const char *str)
{
	int nLen = 0;
	char *str1;
	list_t *tail;
	list_t *new_node;

	for (nLen = 0; str && str[nLen] != '\0'; nLen++)
		;
	tail = head ? *head : NULL;
	while (tail && tail->next != NULL)
		tail = tail->next;
	new_node = malloc(sizeof(list_t));
	if (new_node)
	{
		str1 = malloc(sizeof(char) * (nLen + 1));
		if (!str1)
			free(new_node);
		for (nLen = 0; str[nLen] != '\0'; nLen++)
			str1[nLen] = str[nLen];
		str1[nLen] = '\0';
		new_node->str = str1;
		new_node->nodeLen = nLen;
		new_node->next = NULL;
		if (tail)
			tail->next = new_node;
		if (*head == NULL)
			*head = new_node;
	}

	return (new_node);
}
