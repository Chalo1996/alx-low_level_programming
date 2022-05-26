#include "lists.h"
#include <stdlib.h>

/**
  * add_nodeint_end - adds a node at the end of listint_t list.
  * @head: pointer to the head node.
  * @n: integer value to assign.
  *
  * Return: pointer to the new node, NULL otherwise.
  */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *tmp;
	listint_t *tmp1;

	tmp = *head;

	tmp1 = malloc(sizeof(listint_t));

	if (tmp1 == NULL)
		return (NULL);

	tmp1->n = n;
	tmp1->next = NULL;

	while (tmp != NULL && tmp->next != NULL)
		tmp = tmp->next;

	if (tmp != NULL)
		tmp->next = tmp1;

	else
		*head = tmp1;

	return (tmp1);
}
