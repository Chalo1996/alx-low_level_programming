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

	p = malloc(sizeof(dog_t));

	if (p == NULL)
		return (NULL);

	if (name == NULL)
	{
		free(p);
		free(owner);
		return (NULL);
	}
	else
		p->name = name;

	p->age = age;

	if (owner == NULL)
	{
		free(p);
		free(name);
		return (NULL);
	}
	else
		p->owner = owner;

	return (p);
}
