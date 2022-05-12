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
	dog_t *p;

	p = malloc(sizeof(struct dog));

	if (p == NULL)
		return (NULL);

	if (name == NULL)
	{
		free(p);
		free(owner);
		return (NULL);
	}

	if (owner == NULL)
	{
		free(p);
		free(name);
		return (NULL);
	}

	p->name = name;
	p->age = age;
	p->owner = owner;

	return (p);
}
