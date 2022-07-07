#include "lists.h"

/**
  * dlistint_len - Computes for the number of elements in dlistint_t.
  * @h: pointer to dlistint_t node.
  *
  * Return: number of elements dlistint_t.
  */
size_t dlistint_len(const dlistint_t *h)
{
	size_t counter = 0;

	while (h != NULL)
	{
		h = h->next;
		counter++;
	}
	return (counter);
}
