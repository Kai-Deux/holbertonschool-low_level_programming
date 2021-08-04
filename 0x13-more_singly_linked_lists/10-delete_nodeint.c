#include "lists.h"
/**
 * delete_nodeint_at_index - deletes the node at index index of a listint_t linked list.
 * @head: Pointer to the beginning of the list
 * @index: Index of the node to be freed
 * Returns: 1 if it succeeded, -1 if it failed.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int iterator;
	listint_t *aux;
	listint_t *node;

	aux = *head;
	if (head == NULL || *head == NULL)
		return (-1);
	for (iterator = 0; iterator < index - 1 && aux != NULL && index != 0; i++)
		aux = tmp->next;
	if (aux == NULL)
		return (-1);
	if (index == 0)
	{
		node = tmp->next;
		free(aux);
		*head = node;
	}
	else
	{
		if (aux->next == NULL)
			node = aux->next;
		else
			node = aux->next->next;
		free(aux->next);
		aux->next = node;
	}
	return (1);
}
