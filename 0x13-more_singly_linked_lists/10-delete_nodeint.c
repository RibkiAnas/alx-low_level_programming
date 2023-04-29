#include "lists.h"

/**
* delete_nodeint_at_index - function that
* deletes the node at index index of a
* listint_t linked list.
* @head: double pointer to the head of the list.
* @index: index of the node to delete, starting
* at 0.
*
* Return: 1 if it succeeded, -1 if it failed.
*/
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t *temp, *next_node;

	if (!head || !*head)
		return (-1);
	temp = *head;

	if (index == 0)
	{
		*head = temp->next;
		free(temp);
		return (1);
	}

	for (i = 0; i < index - 1 && temp; i++)
		temp = temp->next;

	if (!temp || temp->next == NULL)
		return (-1);

	next_node = temp->next->next;
	free(temp->next);
	temp->next = next_node;

	return (1);
}
