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
	int len_name = 0, len_owner = 0, i;
	struct dog *new_dog;

	new_dog = malloc(sizeof(struct dog));
	if (new_dog == NULL)
		return (NULL);

	for (; *(name + len_name); len_name++)
		;
	len_name++;

	for (; *(owner + len_owner); len_owner++)
		;
	len_owner++;

	new_dog->name = malloc(sizeof(char) * (len_name + 1));
	if (new_dog->name == NULL)
	{
		free(new_dog);
		return (NULL);
	}

	for (i = 0; i < len_name; i++)
		*(new_dog->name + i) = name[i];

	new_dog->age = age;

	new_dog->owner = malloc(sizeof(char) * (len_owner + 1));
	if (new_dog->owner == NULL)
	{
		free(new_dog->name);
		free(new_dog);
		return (NULL);
	}
	for (i = 0; i < len_owner; i++)
		*(new_dog->owner + i) = owner[i];

	return (new_dog);
}
