#include "lists.h"

/**
* pop_listint - function that deletes the head
* node of a listint_t linked list, and returns
* the head node’s data (n).
* @head: double pointer to the head of the list.
*
* Return: the head node's data (n), or 0 if
* the linked list is empty.
*/
int pop_listint(listint_t **head)
{
	int n;
	listint_t *temp;

	if (!*head)
		return (0);

	temp = *head;
	n = temp->n;
	*head = temp->next;
	free(temp);

	return (n);
}
