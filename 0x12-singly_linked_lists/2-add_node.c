#include "lists.h"
#include <string.h>

/**
 * add_node - adds a new node at the beginning of a list_t list
 * @head: points to the first node of list_t list
 * @str: string to be added to list_t list
 *
 * Return: the address of the new element, or NULL if it failed
 */
list_t *add_node(list_t **head, const char *str)
{
	char *dup; /*dup: duplicate*/
	int len;
	list_t *new; /*list_t is the struct alias, new is the new string*/

	new = malloc(sizeof(list_t));
	/*WE ARE ALLOWED TO USE "STRDUP"see the functions of STRDUP*/
	if (new == NULL)
		return (NULL);
	dup = strdup(str); /*duplicates the string pointed by str*/
	if (dup == NULL)
	{
		free(new);
			return (NULL);
	}
	new->str = dup;
	new->len = len;
	new->next = *head;

	*head = new;
	return (new);
}
