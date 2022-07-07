#include "lists.h"

/**
  * insert_dnodeint_at_index - Inserts a node a given index.
  * @idx: The index to insert the node.
  * @n: The value to insert to the new node.
  * @h: pointer to head pointer.
  *
  * Return: Address of the new node NULL otherwise.
  */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int i = 0;

	dlistint_t *tmp, *tmp1;

	if (h == NULL)
		return (NULL);

	if (idx == 0)
		return (add_dnodeint(h, n));

	tmp1 = *h;

	for (; tmp1 != NULL && i < idx;)
	{
		tmp1 = tmp1->next;
		i++;
	}

	if (tmp1 == NULL && i == idx)
		return (add_dnodeint_end(h, n));

	else if (tmp1 != NULL)
	{
		tmp = malloc(sizeof(dlistint_t));

		if (tmp == NULL)
			return (NULL);
		tmp->n = n;
		tmp1->prev->next = tmp1;
		tmp->prev = tmp1->prev;
		tmp1->prev = tmp;
		tmp->next = tmp1;

		return (tmp);
	}
	return (NULL);
}
