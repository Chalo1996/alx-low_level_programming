#include "lists.h"
#include <stdlib.h>

/**
  * get_nodeint_at_index - returns the nth node of listint_t list.
  * @head: head node.
  * @index: position of the node.
  *
  * Return: head node.
  */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int counter = 0;

	while (counter != index)
	{
		head = head->next;

		if (head == NULL)
			return (NULL);
		counter++;
	}

	return (head);
}
