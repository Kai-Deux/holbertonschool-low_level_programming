#include "lists.h"
/**
 * listint_len -  this function prints all the elements of a listint_t list.
 * @h: linked list pointer.
 * Return: Always 0.
 */
size_t listint_len(const listint_t *h)
{
	size_t counter;

	if (h == NULL)
	{
		return (0);
	}

	for (counter = 0; h != NULL; counter++)
	{
		h = h->next;
	}
	return (counter);
}
