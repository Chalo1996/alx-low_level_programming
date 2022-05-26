#include <stdio.h>
#include "lists.h"

/**
  * print_listint - prints all the elements of listint_t list.
  * @h: pointer to the struct type list.
  *
  * Return: number of nodes.
  */
size_t print_listint(const listint_t *h)
{
	unsigned int counter = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		counter++;
	}
	return (counter);
}
