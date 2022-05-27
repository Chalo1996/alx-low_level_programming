#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
  * print_listint_safe - print lists with a loop.
  * @head: poniter the head node
  *
  * Return: number of nodes.
  */
size_t print_listint_safe(const listint_t *head)
{
	unsigned int lsize = 0, i;
	const listint_t *ptr[200];
	void *p = (void *)head;

	if (!head)
		exit(98);

	while (head)
	{
		for (; i < lsize; i++)
		{
			if (ptr[i] == head)
			{
				printf("-> [%p] %d\n", p, head->n);
				return (lsize);
			}
		}

		printf("[%p] %d\n", p, head->n);
		ptr[lsize] = head;
		lsize++;
		head = head->next;
	}

	return (lsize);
}
