#include "lists.h"
#include <string.h>

/**
 * add_node_end - adds a new node at the end of a list_t list
 * @head: points to the first node of list_t list
 * @str: string to be added to list_t list
 *
 * Return: the address of the new element, or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	char *dup; /*dup: duplicate*/
	int len;
	list_t *new, *last; /*list_t is the struct alias, new is the new string*/

	new = malloc(sizeof(list_t));
	/*WE ARE ALLOWED TO USE "STRDUP"see the functions of STRDUP*/
	if (new == NULL)
		return (NULL);
	dup = strdup(str); /*duplicates the string pointed by str*/
	if (str == NULL)
	{
		free(new);
			return (NULL);
	}

	for (len = 0; str[len];)
		len++;
	new->str = dup;/*stores the address of the new, I AM NOT SURE*/
	new->len = len;
	new->next = NULL;

	if (*head == NULL)
		*head = new;

	else
	{
		last = *head;
		while (last->next != NULL)
			last = last->next;
		last->next = new;
	}
	return (*head);
}
