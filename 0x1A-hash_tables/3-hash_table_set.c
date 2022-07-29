#include "hash_tables.h"

/**
  * hash_node_create - creates a new hash node
  * @key: head node
  * @value: chained value
  *
  * Return: the new node NULL otherwise
  */

hash_node_t *hash_node_create(const char *key, const char *value)
{
	hash_node_t *temp;

	temp = malloc(sizeof(hash_node_t));

	if (temp == NULL)
		return (NULL);

	temp->key = strdup(key);

	if (temp->key == NULL)
	{
		free(temp);
		return (NULL);
	}

	temp->value = strdup(value);

	if (temp->value == NULL)
	{
		free(temp->key);
		free(temp);
		return (NULL);
	}
	temp->next = NULL;
	return (temp);
}


/**
  * hash_table_set - adds an element to the hash table
  * @ht: hash table you want to add or update the key/value to
  * @key: key to update
  * @value: data to update
  *
  * Return: 1 if successful, 0 otherwise
  */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *temp, *tmp;
	char *new_value;

	if (ht == NULL || ht->array == NULL || ht->size == 0 ||
	    key == NULL || strlen(key) == 0 || value == NULL)
		return (0);
	index = key_index((const unsigned char *)key, ht->size);
	tmp = ht->array[index];
	while (tmp != NULL)
	{
		if (strcmp(tmp->key, key) == 0)
		{
			new_value = strdup(value);
			if (new_value == NULL)
				return (0);
			free(tmp->value);
			tmp->value = new_value;
			return (1);
		}
		tmp = tmp->next;
	}

	temp = hash_node_create(key, value);

	if (temp == NULL)
		return (0);

	temp->next = ht->array[index];
	ht->array[index] = temp;

	return (1);
}
