#include "lists.h"

/**
 * add_dnodeint - adds a node to the head of the list
 * @head: This is a pointer(double) to the head
 * @n: Data to be incorporated into a new node
 * Return: pointer to new element, or NULL if unsuccessful.
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *node;
	dlistint_t *h;

	node = malloc(sizeof(dlistint_t));
	if (node == NULL)
		return (NULL);

	node->n = n;
	h = *head;

	if (h != NULL)
	{
		while (h->prev != NULL)
			h = h->prev;
		h->prev = node;
	}

	node->next = h;
	node->prev = NULL;
	*head = node;

	return (node);
}
