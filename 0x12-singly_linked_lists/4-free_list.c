#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_list - free list_t list
 * @head: points to the first node
 */

void free_list(list_t *head)
{
	list_t *tmp;/*list_t is the struct alias, see lists.h file*/

	while (head)
	{
		tmp = head->next;
		free(head->str);
		free(head);
		head = tmp;
	}
}
