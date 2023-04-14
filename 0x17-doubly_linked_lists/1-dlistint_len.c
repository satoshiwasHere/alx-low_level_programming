#include "lists.h"

/**
 * dlistint_len - Calculates the number of elements in a list.
 * @h: head of list
 * Return: Total number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t nodes = 0;
	const dlistint_t *current_node;

	current_node = h;
	while (current_node)
	{
		current_node = current_node->next;
		nodes++;
	}

	return (nodes);
}
