#include "lists.h"

/**
  * list_len - returns the number of elements of list-t list.
  * @h: pointer to the list structure.
  *
  * Return: number of nodes.
  */
size_t list_len(const list_t *h)
{
	unsigned int counter;

	counter = 0;

	while (h != 0)
	{
		h = h->next;
		counter++;
	}
	return (counter);

}
