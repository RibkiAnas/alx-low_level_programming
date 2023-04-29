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
	size_t count = 0;
	const listint_t *s, *f;

	if (!head)
		exit(98);

	s = head;
	f = head;

	while (s && f && f->next)
	{
		printf("[%p] %d\n", (void *)s, s->n);
		count++;
		s = s->next;
		f = f->next->next;

		if (s == f)
		{
			printf("-> [%p] %d\n", (void *)s, s->n);
			exit(98);
		}
	}

	while (s)
	{
		printf("[%p] %d\n", (void *)s, s->n);
		count++;
		s = s->next;
	}
	return (count);
}
