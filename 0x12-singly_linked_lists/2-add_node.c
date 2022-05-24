#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
  * add_node - adds a new node at the start of list_t list.
  * @head: pointer to the first node.
  * @str: pointer to the string element.
  *
  * Return: the address of the new element, NULL otherwise.
  */
list_t *add_node(list_t **head, const char *str)
{
	list_t *ptr;
	unsigned int counter;

	counter = 0;

	ptr = (list_t *)malloc(sizeof(list_t **));

	if (str == NULL)
	{
		ptr->str = NULL;
		ptr->len = 0;
		ptr->next = *head;
	}

	if (ptr == NULL)
		return (NULL);

	ptr->next = *head;
	*head = ptr;

	ptr->str = strdup(str);

	while (str[counter])
		counter++;
	ptr->len = counter;

	return (ptr);
}
