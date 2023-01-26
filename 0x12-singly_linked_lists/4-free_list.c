#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_list - free list_t list
 * @head: points to the first node
 */

void free_list(list_t *head)
{
	if (head == NULL)
		return;
	free(head->str);
	free(head->next);
	free(head);
}
