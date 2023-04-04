#include <stdlib.h>
#include "lists.h"

/**
 * free_listint2 - a function that frees a listint_t list
 * @head: pointer to a pointer to the first node of the list
 *
 * Return: 0 Always
 */
void free_listint2(listint_t **head)
{
	listint_t *current, *temp;

	if (head == NULL)
		return;

	current = *head;
	while (current != NULL)
	{
		temp = current;
		current = current->next;
		free(temp);
	}
	*head = NULL;
}
