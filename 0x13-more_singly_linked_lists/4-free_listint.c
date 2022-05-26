#include "lists.h"
#include <stdlib.h>

/**
  * free_listint - frees listint_t list.
  * @head: pointer to listint_t list.
  *
  */
void free_listint(listint_t *head)
{
	if (head != NULL)
	{
		if (head->next != NULL)
			free_listint(head->next);

		free(head);
	}
}
