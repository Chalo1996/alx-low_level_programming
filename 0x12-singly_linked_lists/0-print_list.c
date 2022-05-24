#include "lists.h"

/**
  * print_list - prints all the elements of list-t.
  * @h: pointer to the list structure.
  *
  * Return: number of nodes.
  */
size_t print_list(const list_t *h)
{
	unsigned int counter;

	counter = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");

		else
		{
			printf("[%d] %s\n", h->len, h->str);
		}

		h = h->next;
		counter++;
	}
	return (counter);
}
