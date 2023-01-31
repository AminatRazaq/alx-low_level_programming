#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_listint2 - frees a listint_t list. and SET head to null
 */

void free_listint2(listint_t **head)
/*not the head is pointer poniter **head */
{
	listint_t *tmp;

	if (head == NULL)
		return;

	else
	{
		while (*head)/*recall head is pointer to a pointer above*/
		{
			tmp = (*head)->next;
			free(*head);
			*head = tmp;
		}
		head = NULL;/*from the question: set head to null*/
	}
}
