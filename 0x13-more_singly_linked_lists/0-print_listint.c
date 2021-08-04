#include "lists.h"

/**
 * print_listint -  this function prints all the elements of a listint_t list.
 * @h: linked list pointer.
 * Return: Always 0.
 */
size_t print_listint(const listint_t *h)
{
	size_t counter;

	if (h == NULL)
	{
		return (0);
	}

	for (counter = 0; h != NULL; counter++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
	return (counter);
}
