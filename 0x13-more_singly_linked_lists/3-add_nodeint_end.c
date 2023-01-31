#include "lists.h"
#include <stdio.h>

/**
 * add_nodeint_end - adds a new node at the end of a list
 * @head: a pointer to the beginning of the list
 * @n: integr of the new node to be added
 * Return: the address of the new element, or NULL if it failed
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new, *last;
	/*the node here consists of two parts: n and next*/
	/*last is a pointer to the head and new(temporary address of n)*/
	new = malloc(sizeof(listint_t));

	last = *head;/*last is pointer to head, the beginning, it checks all nodes*/
	/*after checking it updates the two partsthat makes up each node*/
	new->n = n;/*updates n*/
	new->next = NULL;/*remmener end of a list must be NULL*/

	if (new == NULL)
		return (NULL);

	while (last->next != NULL)
	{
		last = last->next;
		last->next = new;/*updates with the new value*/
	}

	return (*head);
}
