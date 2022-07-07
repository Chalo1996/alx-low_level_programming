#include "lists.h"

/**
  * add_dnodeint - Adds a node at the beginning.
  * @head: pointer to the head pointer.
  * @n: the value to insert to the new node.
  *
  * Return: Address of the new node.
  */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *tmp;

	tmp = (dlistint_t *)malloc(sizeof(dlistint_t));

	if (tmp == NULL)
		return (NULL);
	if (head == NULL)
		return (NULL);

	tmp->n = n;
	tmp->next = *head;
	tmp->prev = NULL;

	if (*head != NULL)
	{
		(*head)->prev = tmp;
	}
	*head = tmp;

	return (tmp);
}
