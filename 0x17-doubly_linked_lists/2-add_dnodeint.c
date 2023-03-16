#include "lists.h"

/**
 * add_dnodeint - adds a new node at the beginning of a dlistint_t list
 * @head: points to the first element of the list
 * @n: the data (in form of integer here) in the node
 *
 * Return: the address of the new element, or NULL if it failed
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *temp;

	temp = malloc(sizeof(dlistint_t));
	temp->prev = NULL;/*this and the next 2 lines are used to create a node*/
	temp->n = n;
	temp->next = NULL;
	temp->next = *head; /*https://www.youtube.com/watch?v=SPKCATQ--KY*/
	(*head)->prev = temp;
	*head = temp;
	return (*head);
}
