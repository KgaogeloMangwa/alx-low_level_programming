#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_listint_safe - prints a linked list, handling loops
 * @head: pointer to the head of the list
 *
 * Return: The number of nodes in the list
 */

size_t print_listint_safe(const listint_t *head)
{
	const listint_t *slow_ptr = head, *fast_ptr = head;
	size_t count = 0;

	while (slow_ptr && fast_ptr->next)
	{
		printf("[%p] %d\n", (void *) slow_ptr, slow_ptr->n);
		count++;
		slow_ptr = slow_ptr->next;
		fast_ptr = fast_ptr->next->next;

		if (slow_ptr == fast_ptr)
		{
			printf("[%p] %d\n", (void *) slow_ptr, slow_ptr->n);
			count++;
			printf("-> [%p] %d\n", (void *) slow_ptr->next, slow_ptr->next->n);

			while (slow_ptr != slow_ptr->next)
			{
				slow_ptr = slow_ptr->next;
				count++;
				 printf("[%p] %d\n", (void *) slow_ptr, slow_ptr->n);
			}
			exit(98);
		}
	}

	while (slow_ptr)
	{
		printf("[%p] %d\n", (void *) slow_ptr, slow_ptr->n);
		count++;
		slow_ptr = slow_ptr->next;
	}

	return (count);
}
