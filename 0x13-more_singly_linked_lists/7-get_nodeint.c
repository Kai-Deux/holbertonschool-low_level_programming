#include "lists.h"
/**
 * get_nodeint_at_index - Returns the node at an index
 * @head: Pointer to the first element of the list
 * @index: Desired node at this position
 * Return: head
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int index_count;

	for (index_count = 0; index_count < index; index_count++)
	{
		if (head == NULL)
			return (NULL);
		head = head->next;
	}
	return (head);
}
