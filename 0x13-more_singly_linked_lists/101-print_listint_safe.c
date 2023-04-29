#include "lists.h"

/**
* print_listint_safe - function that prints a
* listint_t linked list.
* @head: pointer to the head of the list.
*
* Return: the number of nodes in the list.
*/
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *tmp_node = NULL;
	const listint_t *l_node = NULL;
	size_t counter = 0;
	size_t new_node;

	tmp_node = head;
	while (tmp_node)
	{
		printf("[%p] %d\n", (void *)tmp_node, tmp_node->n);
		new_node = (size_t)tmp_node;
		tmp_node = tmp_node->next;
		counter++;
		if (new_node <= (size_t)tmp_node)
		{
			l_node = tmp_node;
			break;
		}
	}
	if (l_node)
	{
		printf("-> [%p] %d\n", (void *)l_node, l_node->n);
		counter++;
	}
	return (counter);

}
