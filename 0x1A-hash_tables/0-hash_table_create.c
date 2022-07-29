#include "hash_tables.h"

/**
  * hash_table_create - Creates a hash table.
  * @size: size of the array
  *
  * Return: array size pointer.
  */

hash_table_t *hash_table_create(unsigned long int size)
{
		hash_table_t *array;

		array = (hash_table_t *)malloc(sizeof(hash_table_t));

		if (array == NULL)
		{
			return (NULL);
		}
		array->size = size;

		return (array);
}
