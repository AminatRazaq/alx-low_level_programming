#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * get_nodeint_at_index - returns the nth node of a list
 * @head: points to the beginning of alist
 * @index: index of the node which statrts at 0
 * Return: if the node does not exist, return NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int node;
	/*node is variable declared to check through nodes*/
	/*index is the index of the node, starting at 0*/

	for (node = 0; node < index; node++)
	{
		if (head == NULL)
			return (NULL);

		else
			head = head->next;
	}
	return (head);
}
