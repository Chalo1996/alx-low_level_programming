#include "lists.h"

/**
  * add_dnodeint_end - Adds a node at the end of the list.
  * @head: pointer to the head pointer.
  * @n: Value to insert to the new node>
  *
  * Return: Address of the new node>
  */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *tmp, *tmp1;

	tmp = (dlistint_t *)malloc(sizeof(dlistint_t));

	if (head == NULL)
		return (NULL);

	if (tmp == NULL)
		return (NULL);

	tmp->n = n;
	tmp->next = NULL;

	if (*head == NULL)
	{
		tmp->prev = NULL;
		*head = tmp;
		return (tmp);
	}
	tmp1 = *head;

	while (tmp1->next != NULL)
		tmp1 = tmp1->next;

	tmp1->next = tmp;
	tmp->prev = tmp1;

	return (tmp);

}
