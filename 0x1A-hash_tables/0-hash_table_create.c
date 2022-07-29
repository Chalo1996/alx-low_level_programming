#include "hash_tables.h"

/**
  * hash_table_create - Creates a hash table.
  * @size: size of the array
  *
  * Return: array size pointer.
  */

hash_table_t *hash_table_create(unsigned long int size)
{
		hash_table_t *arraySize;
	
		arraySize = (hash_table_t *)malloc(sizeof(hash_table_t));

		if (arraySize == NULL)
		{
			return (NULL);
		}
		arraySize->size = size;
		arraySize->array = (hash_node_t **)malloc(size * sizeof(hash_node_t **));

		if (arraySize->array == NULL)
		{
			free (arraySize);
			return (NULL);
		}

		return (arraySize);
}
