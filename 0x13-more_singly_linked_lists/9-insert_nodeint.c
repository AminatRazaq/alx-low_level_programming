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
	listint_t *new, *copy = *head;
	unsigned int node;
	/*new poiints to the new node to be inserted*/
	/*copy points to the head, I AM NOT SURE*/

	new = malloc(sizeof(listint_t));

	if (new == NULL)
		return (NULL);
	/*update the data of new node*/
	new->n = n;

	if (idx == 0)
	{
		new->next = copy;
		*head = new;
		return (new);
	}

	for (node = 0; node < (idx - 1); node++)/*(idx-1) since new node is between*/
	{
		if (copy == NULL || copy->next == NULL)
			return (NULL);

		copy = copy->next;
	}
	new->next = copy->next;
	copy->next = new;

	return (new);
}

