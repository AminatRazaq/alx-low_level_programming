#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_listint - frees a listint_t list
 * @head: pointer to the begining of the list
 */

void free_listint(listint_t *head)
{
	listint_t *tmp;
	/*tmp is a pointer variable declared*/

	while (head)
	{
		tmp = head->next;
		free(head);
		head = tmp;
	}
}
