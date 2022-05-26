#include "lists.h"
#include <stdlib.h>

/**
  * sum_listint - returns the sum of all the data(n) of listint_t list.
  * @head: head node.
  *
  * Return: the sum.
  */
int sum_listint(listint_t *head)
{
	int get_sum = 0;

	if (head == NULL)
		return (0);

	while (head != NULL)
	{
		get_sum += head->n;
		head = head->next;
	}

	return (get_sum);
}
