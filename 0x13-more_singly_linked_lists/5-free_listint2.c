#include "lists.h"
#include <stdlib.h>

/**
  * free_listint2 - frees listint_t list.
  * @head: pointer to listint_t list.
  *
  */
void free_listint2(listint_t **head)
{
	listint_t *tmp;

	if (!head || !*head)
		return;

	while (*head)
	{
		tmp = *head;
		*head = (*head)->next;
		free(tmp);
	}

	*head = NULL;
}
