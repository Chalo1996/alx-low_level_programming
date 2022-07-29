#include "hash_tables.h"

/**
  * hash_table_print - prints a hash table.
  * @ht: the hash table.
  *
  */

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *tmp;
	char bit = 0;

	if (ht == NULL || ht->array == NULL)
		return;

	printf("{");

	for (i = 0; i < ht->size; i++)
	{
		tmp = ht->array[i];
		while (tmp != NULL)
		{
			if (bit == 1)
				printf(", ");

			printf("'%s': '%s'", tmp->key, tmp->value);
			bit = 1;

			tmp = tmp->next;
		}
	}
	printf("}\n");
}
