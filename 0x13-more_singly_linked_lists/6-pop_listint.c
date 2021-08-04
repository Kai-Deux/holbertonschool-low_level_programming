#include "lists.h"

/**
 *pop_listint - Deletes the first element of a list
 *@head: Pointer to the head of the list
 *Return: The value of the deleted node
 */

int pop_listint(listint_t **head)
{
	listint_t *t;
	int n;

	t = *head;
	if (t == NULL)
		return (0);
	*head = t->next;
	n = t->n;
	free(t);
	return (n);
}
