#include "lists.h"
#include <stdlib.h>

/**
  * free_listint - frees listint_t list.
  * @head: pointer to listint_t list.
  *
  */
void free_listint2(listint_t **head)
{
	listint_t *tmp;
	listint_t *tmp1;

	if (head != NULL)
	{
		tmp = NULL;
		
		while (tmp != NULL)
		{
			tmp1 = tmp;
			tmp = tmp->next;
			free(tmp->next);
			free(tmp1);
			free(*head);
		}
		*head = NULL;
	}
}
