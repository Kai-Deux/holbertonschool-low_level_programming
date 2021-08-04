#include "lists.h"

/**
 *listint_len - prints all the elements of a listint_t list.
 *@h: Pointer to list
 *Return: count.
 */

size_t listint_len(const listint_t *h)
{
	size_t count;

	if (h == NULL)
		return;
	while (h != NULL)
	{
		h = h->next;
		count++;
	}
	return (count);
}
