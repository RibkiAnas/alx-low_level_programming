#include "lists.h"

size_t listint_len_looped(const listint_t *head);

/**
* listint_len_looped - function that count
* the number of unique node in a looped list
* @head: pointer to the head of the list.
*
* Return: the total number of unique nodes
* in the list.
*/
size_t listint_len_looped(const listint_t *head)
{
	const listint_t *s, *f;
	size_t len = 1;

	if (!head || !head->next)
		return (0);

	s = head->next;
	f = head->next->next;

	while (f)
	{
		if (s == f)
		{
			s = head;
			while (s != f)
			{
				len++;
				s = s->next;
				f = f->next;
			}

			s = s->next;
			while (s != f)
			{
				len++;
				s = s->next;
			}
			return (len);
		}

		s = s->next;
		f = f->next->next;
	}

	return (0);
}

/**
* print_listint_safe - function that prints a
* listint_t linked list.
* @head: pointer to the head of the list.
*
* Return: the number of nodes in the list.
*/
size_t print_listint_safe(const listint_t *head)
{
	size_t un_nodes, i = 0;

	un_nodes = listint_len_looped(head);

	if (un_nodes == 0)
	{
		while (head)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
			un_nodes++;
		}
	}
	else
	{
		for (i = 0; i < un_nodes; i++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
		printf("-> [%p] %d\n", (void *)head, head->n);
	}
	return (un_nodes);
}
