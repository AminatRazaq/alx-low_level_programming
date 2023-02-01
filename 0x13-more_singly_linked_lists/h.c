#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * insert_nodeint_at_index - insert a node
 * @head: points at the beginning of the list
 * @idx: index of the list where the new node should be added
 * @n: integer
 * Return: the address of the new node, or NULL if it failed
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *ptr = *head;
	listint_t *new;/*new is the pointer to the new node to be inserted*/

	new = malloc(sizeof(listint_t));

	if (new == NULL)
		return (NULL);
	/*update the data and address of new node*/
	new->n = n;
	new->next = NULL;

	idx--;/*we decreement the position of node*/
	while (idx != 1)
	{
		ptr = ptr->next;
		idx--;
	}
	new->next = ptr->next;
	ptr->next = new;

	return (new);
}

