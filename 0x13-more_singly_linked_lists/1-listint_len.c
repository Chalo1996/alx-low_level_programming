#include <stdio.h>
#include "lists.h"

/**
  * listint_len - computes the number of nodes in the listint_t list.
  * @h: pointer to the struct node list.
  *
  * Return: the number of elements.
  */
size_t listint_len(const listint_t *h)
{
	unsigned int counter = 0;

	while (h != NULL)
	{
		h = h->next;
		counter++;
	}
	return (counter);
}
