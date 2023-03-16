#include "lists.h"

/**
 * free_dlistint - frees a dlistint_t list.
 * @head: pointer to the list.
 **/
void free_dlistint(dlistint_t *head)
{
	dlistint_t *reb;
	dlistint_t *wes;

	if (head)
	{
		reb = head;
		wes = head->next;
		while (wes)
		{
			free(reb);
			reb = wes;
			wes = wes->next;
		}
		free(reb);
	}
}
