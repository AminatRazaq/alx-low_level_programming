#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * pop_listint - del. head node of alist & returns the head node’s data (n)
 * @head: ponts to the beginning of tghe list
 *
 * Return: 0 if list is empty else return the head node's data (n)
 */

int pop_listint(listint_t **head)
{
	listint_t *tmp;
	/* we need tmp to point to the headin order to free the 1st node*/
	int new_node_data;
	/*the value that the new head node's data would take on*/

	if (*head == NULL)/*to check if list is empty*/
		return (0);

	tmp = *head;/*points to the first node, that is why tmp was created*/
	new_node_data = (*head)->n;/*the new node's dat updated*/
	*head = (*head)->next;/* to move the head pointer to the second node*/
	free(tmp);/*after moving he pointer to second node, we free tmp*/

	return (new_node_data);/*return the head node's data*/
}
