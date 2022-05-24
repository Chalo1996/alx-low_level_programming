#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
  * free_list - frees a list_t list.
  * @head: pointer to list_t
  */
void free_list(list_t *head)
{
	list_t *ptr;

	ptr = head;

	for (; ptr != NULL; )
	{
		ptr = ptr->next;
		free(ptr);
	}
}
