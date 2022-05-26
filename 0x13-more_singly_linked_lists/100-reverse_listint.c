#include "lists.h"
#include <stdio.h>

/**
  * reverse_listint - reverses a listint_t list.
  * @head: pointer to head pointer.
  *
  * Return: first node address.
  */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *tmp;
	listint_t *tmp1;

	tmp = *head;
	if (tmp == NULL)
		return (NULL);

	tmp1 = tmp->next;
	tmp->next = NULL;

	while (tmp1 != NULL)
	{
		tmp = tmp1;
		tmp1 = tmp1->next;
		tmp->next = *head;
		*head = tmp;
	}
	return (*head);
}
