#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
  * add_node_end - adds a node at the end of the list_t list.
  * @head: pointer to list_t list pointer.
  * @str: pointer to the string.
  *
  * Return: address of the new node, NULL otherwise.
  */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *ptr;
	list_t *tmp;
	char *s_dup;
	unsigned int counter;

	counter = 0;

	ptr = (list_t *)malloc(sizeof(list_t **));

	if (str == NULL)
		return (NULL);

	if (ptr == NULL)
		return (NULL);

	while (str[counter])
		counter++;

	s_dup = strdup(str);

	if (*head == NULL)
	{
		*head = ptr;
		ptr->len = counter;
		ptr->str = s_dup;
		ptr->next = NULL;
		return (ptr);
	}
	tmp = *head;

	while (tmp->next != NULL)
		tmp = tmp->next;

	tmp->next = ptr;
	ptr->len = counter;
	ptr->str = s_dup;
	ptr->next = NULL;

	return (ptr);
}
