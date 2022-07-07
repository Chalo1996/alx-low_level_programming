#include "lists.h"

/**
  * sum_dlistint - Computes the sum of all data.
  * @head: pointer to the head node.
  *
  * Return: The sum.
  */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
