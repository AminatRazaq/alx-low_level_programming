#include "lists.h"

/**
 * dlistint_len - returns the number of elements in a linked dlistint_t list
 * @h: the head of d_listint_t list
 *
 * Return: number of elements in the linked list
 */

/*Similar to Task 0*/

size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *ptr = h;

	size_t num_elements = 0;

	while (ptr)
	{
		num_elements++;
		ptr = ptr->next;
	}
	return (num_elements);
}
