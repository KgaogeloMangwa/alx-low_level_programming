#include "lists.h"
#include <stdio.h>

/**
 * print_listint - a function that prints all the elemensts of listint_t list
 * @h: pointer to the head of the liked list of integers
 *
 * Return: number of nodes in the lists of size_t
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
