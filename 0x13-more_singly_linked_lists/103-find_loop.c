#include "lists.h"

/**
 * find_listint_loop - checks if there is a loop in the linked list
 *
 * @head: pointer to the first node in the linked list
 * Return: address of the node where the loop starts otherwise NULL
 */

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *onStep, *twoStep;

	onStep = twoStep = head;
	while (onStep && twoStep && twoStep->next)
	{
		onStep = onStep->next;
		twoStep = twoStep->next->next;
		if (onStep == twoStep)
		{
			onStep = head;
			break;
		}
	}

	if (!onStep || !twoStep || !twoStep->next)
		return (NULL);

	while (onStep != twoStep)
	{
		onStep = onStep->next;
		twoStep = twoStep->next;
	}
	return (twoStep);
}
