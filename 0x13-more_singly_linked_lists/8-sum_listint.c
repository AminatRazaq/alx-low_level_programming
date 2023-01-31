#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * sum_listint - all the data (n) of a list
 * @head: points at the beginning of a list
 * Return: if the list is empty, return 0
 */

int sum_listint(listint_t *head)
{
	int sum = 0;/*sums all the data in the list*/

	while (head)
	{
		sum += head->n;
		/*add updated sum of previous data to new data in each node*/
		head = head->next;
	}
	return (sum);
}
