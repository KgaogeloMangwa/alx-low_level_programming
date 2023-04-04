#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * free_listint - a function that frees a listint_t list
 * @head: a pointer to the head of the node of the list
 *
 * Return: 0 always
 */

void free_listint(listint_t *head)
{
	listint_t *current;

	while (head != NULL)
	{
		current = head;
		head = head->next;
		free(current);
	}
}
