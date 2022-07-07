#include "lists.h"

/**
  * print_dlistint - prints number of elements of dlistint_t.
  * @h: pointer to dlistint_t node.
  *
  * Return: The number of nodes.
  */
size_t print_dlistint(const dlistint_t *h)
{
	size_t counter = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		counter++;
	}
	return (counter);
}
