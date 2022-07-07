#include "lists.h"

/**
  * get_dnodeint_at_index - Get a node of a given index.
  * @head: pointer to the head node.
  * @index: index of the node.
  *
  * Return: All nodes.
  */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;

	if (head == NULL)
		return (NULL);

	while (head != NULL && i < index)
	{
		head = head->next;
		i++;
	}
	return (head);
}
