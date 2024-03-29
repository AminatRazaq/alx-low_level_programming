#include "lists.h"

/**
 * sum_dlistint - returns the sum of all the data (n) of a dlistint_t list.
 * @head: pointer to the list.
 * Return: sum of all data in the list, 0 if the lost is empty.
 **/
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *nodes = head;
	int sum = 0;

	while (nodes)
	{
		sum += nodes->n;
		nodes = nodes->next;
	}

	return (sum);
}
