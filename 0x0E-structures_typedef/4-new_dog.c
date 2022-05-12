#include "dog.h"
#include "dog_t.h"
#include "my_dog.h"
#include <stdlib.h>

/**
  * new_dog - creates a new dog.
  * @name: dog's name.
  * @age: dog's age.
  * @owner: dog's owner.
  *
  * Return: pointer to the inode.
  */
dog_t *new_dog(char *name, float age, char *owner)
{
	int len_name = 0, len_owner = 0, i, j, k, l;
	struct dog *new_dog;

	new_dog = malloc(sizeof(struct dog));
	if (new_dog == NULL)
		return (NULL);

	for (i = 0; name[i] != '\0'; i++)
		len_name++;

	for (j = 0; owner[j] != '\0'; j++)
		len_owner++;

	new_dog->name = malloc(sizeof(char) * (len_name + 1));
	if (new_dog->name == NULL)
	{
		free(new_dog);
		return (NULL);
	}

	for (k = 0; k < len_name; k++)
		new_dog->name[k] = name[k];

	new_dog->age = age;

	new_dog->owner = malloc(sizeof(char) * (len_owner + 1));
	if (new_dog->owner == NULL)
	{
		free(new_dog->name);
		free(new_dog);
		return (NULL);
	}
	for (l = 0; l < len_owner; l++)
		*(new_dog->owner + l) = owner[l];

	return (new_dog);
}
