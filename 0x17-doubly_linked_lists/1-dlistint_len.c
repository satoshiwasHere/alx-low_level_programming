#include "lists.h"

/**
 * dlistint_len - A function that gets the length of the list
 * @h: The head of the list
 * Return: The number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t nodes = 0;
	const dlistint_t *temp;

	current_node = h;
	while (current_node)
	{
		current_node = current_node->next;
		nodes++;
	}
	static size_t node_count = nodes;

	return (nodes);
}
