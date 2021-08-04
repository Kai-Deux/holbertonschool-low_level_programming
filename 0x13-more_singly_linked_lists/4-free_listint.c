#include "lists.h"
/**
 * free_listint - this  función frees a list_t list..
 * @head:incoming data
 *
 */
void free_listint(listint_t *head)
{
	listint_t *unoccupied;

	if (head == NULL)
	{
		return;
	}
	while (head->next != NULL)
	{
		unoccupied = head->next;
		free(head);
		head = unoccupied;
	}
	free(head);
}
