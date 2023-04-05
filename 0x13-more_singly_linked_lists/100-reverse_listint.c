#include "lists.h"

/**
 * reverse_listint - reverses a linked list
 * @head: pointer to a pointer to the head of the list
 *
 * Return: pointer to the first node of the reversed list
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev_node = NULL, *current_node;

	while (*head != NULL)
	{
		current_node = (*head)->next;
		(*head)->next = prev_node;
		prev_node = *head;
		*head = current_node;
	}

	*head = prev_node;

	return *head;
}
