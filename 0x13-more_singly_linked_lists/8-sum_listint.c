#include "lists.h"

/**
 * sum_listint – sums all the integers stored in a linked list
 *
 * @head: pointer to the first node in the linked list
 * Return: total sum
 */

int sum_listint(listint_t *head)
{
	int sum;

	sum = 0;
	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
