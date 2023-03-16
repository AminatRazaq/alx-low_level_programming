#include "lists.h"

/**
 * print_dlistint - prints all the elements of a dlistint_t list
 * @h: the head of dlistint_t list
 *
 * Return: number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *ptr;

	ptr = h;
	size_t nodes = 0;

	while (ptr)
	{
		print("%i\n", nodes->n);
		nodes++;
		ptr = ptr->next;
	}
	return (nodes)


}
