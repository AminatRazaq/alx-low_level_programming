#include "lists.h"
#include <stdio.h>

/**
 * list_len - lists the number of elements in a linked list_t list
 * @h: list_t list
 *
 * Return: return the number of elements in a linked list_t list
 */
size_t list_len(const list_t *h)
{
	size_t elements = 0;

	while (h)
	{
		elements++;
		h = h->next; /*next ispointing to next node*/
	}
	return (elements);
}
