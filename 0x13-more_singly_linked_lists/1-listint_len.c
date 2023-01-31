#include "lists.h"
#include <stdio.h>

/**
 * listint_len - returns the number of elements in a linked list
 * @h: listint_t list
 *
 * Return: the number of elemnents in the linked list
 */

size_t listint_len(const listint_t *h)
{
	size_t elements = 0;

	while (h)
	{
		elements++;
		h = h->next;/*points to the next node*/
	}
	return (elements);
}

