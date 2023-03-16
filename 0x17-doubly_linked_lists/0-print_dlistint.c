#include "lists.h"

/**
 * print_dlistint - prints all the elements of a dlistint_t list
 * @h: the head of dlistint_t list
 *
 * Return: number of nodes
 */
/*https://www.youtube.com/watch?v=fPfJRQ8999k*/
/*dlistint_t and n are in the struct in lists.h file*/

size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *ptr = h;
	size_t nodes = 0;

	while (ptr)
	{
		printf("%i\n", ptr->n);
		nodes++;
		ptr = ptr->next;
	}
	return (nodes);
}
