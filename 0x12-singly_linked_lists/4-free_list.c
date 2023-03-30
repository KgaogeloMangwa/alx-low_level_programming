#include "lists.h"
#include <stdlib.h>

/**
 * free_list - a function that frees a list_t list
 * @head: pointer to the head of a linked list
 */

void free_list(list_t *head)
{
	while (head != NULL)
	{
		list_t *current = head;

		head = head->next;

		free(current->str);
		free(current);
	}
}

