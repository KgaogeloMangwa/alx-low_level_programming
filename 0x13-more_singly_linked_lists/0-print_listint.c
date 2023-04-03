#include  "lists.h"
#include <stdio.h>

/**
 * print_listint - a function that prints all the of a listint_t list
 * @h: a pointer to the head of the listint_t list
 *
 * Return: the number of nodes in the listint_t list
 */

size_t print_listint(const listint_t *h)
{
	size_t node_count = 0;

	while (h)
	{
		node_count++;
		printf("%d\n", h->n);
		h = h->next;
	}

	return (node_count);
}
