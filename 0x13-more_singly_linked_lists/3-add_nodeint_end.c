#include "lists.h"

/**
  * add_nodeint_end - adds a new node at the end of a listint_t list.
  * @head: The head of the linked list
  * @n: The value to add to the end of the linked list
  *
  * Return: the address of the new element, or NULL if it failed.
  */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new;
	listint_t *temporary;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}

	temporary = *head;

	while (temporary->next != NULL)
		temporary = temporary->next;

	temporary->next = new;

	return (new);
}
