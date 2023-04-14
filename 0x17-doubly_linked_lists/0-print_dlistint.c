#include "lists.h"

/**
 * print_dlistint - prints all the elements of a
 * dlistint_t list
 *
 * @h: head of the list
 * Return: the number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
        int count;
        const dlistint_t *crnt;

        count = 0;
        crnt = h;

        if (h == NULL)
                return (count);

        while (crnt->prev != NULL)
                crnt = crnt->prev;

        while (crnt != NULL)
        {
                printf("%d\n", crnt->n);
                count++;
                crnt = crnt->next;
        }

        return (count);
}
