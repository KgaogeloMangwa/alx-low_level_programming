#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at a given position
 * @head: pointer to a pointer to the head of the list
 * @index: index of the node to be deleted (starting at 0)
 *
 * Return: 1 if it succeeded, -1 if it failed
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current_node, *prev_node;
	unsigned int i;

	if (head == NULL || *head == NULL)
		return (-1);

	if (index == 0)
	{
		current_node = *head;
		*head = current_node->next;
		free(current_node);
		return (1);
	}

	prev_node = *head;

	for (i = 0; i < index - 1 && prev_node->next != NULL; i++)
		prev_node = prev_node->next;

	if (prev_node->next == NULL)
		return (-1);

	current_node = prev_node->next;
	prev_node->next = current_node->next;
	free(current_node);

	return (1);
}
