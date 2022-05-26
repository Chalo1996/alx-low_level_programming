#include "lists.h"
#include <stdlib.h>

/**
  * add_nodeint - adds a new node at the beginning of
  *               listint_t list.
  * @head: pointer to the head node.
  * @n: the integer value to assign.
  *
  * Return: address of the new node, NULL otherwise.
  */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *temp;

	temp = malloc(sizeof(listint_t));

	if (temp == NULL)
		return (NULL);

	temp->n = n;
	temp->next = *head;
	*head = temp;

	return (temp);
}
