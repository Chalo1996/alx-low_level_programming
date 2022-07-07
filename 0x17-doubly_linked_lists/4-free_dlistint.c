#include "lists.h"

/**
  * free_dlistint - frees the list.
  * @head: pointer to the head node.
  *
  */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp;

	while (head != NULL)
	{
		tmp = head->next;
		free(head);
		head = tmp;
	}
}
