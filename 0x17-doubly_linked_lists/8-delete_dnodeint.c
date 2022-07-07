#include "lists.h"

/**
  * delete_dnodeint_at_index - Delete a node at an index.
  * @head: pointer to head pointer.
  * @index: Position from which to delete the node.
  *
  * Return: 1 on success -1 otherwise.
  */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *tmp;
	unsigned int i = 0;

	if (head == NULL || *head == NULL)
		return (-1);

	if (index == 0)
	{
		tmp = *head;
		*head = tmp->next;

		if (*head != NULL)
			(*head)->prev = NULL;
		free(tmp);
		return (1);
	}

	tmp = *head;

	for (; tmp != NULL && i < index;)
	{
		tmp = tmp->next;
		i++;
	}
	if (tmp == NULL)
		return (-1);
	tmp->prev->next = tmp->next;

	if (tmp->next != NULL)
		tmp->next->prev = tmp->prev;
	free(tmp);
	return (1);
}
