#include "lists.h"

/**
* insert_nodeint_at_index - function that
* inserts a new node at a given position.
* @head: double pointer to the head of the list.
* @idx: index of the position to insert the new
* node, starting at 0.
* @n: integer value for the new node.
*
* Return: the address of the new node, or NULL
* if it failed or if it is not.
*/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *new_node, *temp;

	if (!head)
		return (NULL);

	new_node = malloc(sizeof(listint_t));
	if (!new_node)
		return (NULL);

	new_node->n = n;

	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}

	temp = *head;
	for (i = 0; i < idx - 1 && temp; i++)
		temp = temp->next;
	
	if (!temp)
	{
		free(new_node);
		return (NULL);
	}

	new_node->next = temp->next;
	temp->next = new_node;

	return (new_node);
}
