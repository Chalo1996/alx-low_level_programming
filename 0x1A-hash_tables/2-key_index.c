#include "hash_tables.h"

/**
  * key_index - returns the index of the key
  * @key: the data to search
  * @size: the size of the array
  *
  * Return: the index of the key
  */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
		unsigned long int index;

		index = (hash_djb2(key) % size);

		return (index);
}
