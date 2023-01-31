#include "lists.h"
#include <stdio.h>

/**
 * add_nodeint - adds a new node at the beginning of a list
 * @head: a pointer to the beginning of the list
 * @n: integr of the new node to be added
 * Return: the address of the new element, or NULL if it failed
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));

	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = *head;

	*head = new;

	return (new);
}
