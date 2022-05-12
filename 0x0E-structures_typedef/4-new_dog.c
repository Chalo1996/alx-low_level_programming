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
	dog_t *p;

	p = malloc(sizeof(struct dog));
	if (p == NULL)
		return (NULL);

	for (i = 0; name[i] != '\0'; i++)
		len_name++;

	for (j = 0; owner[j] != '\0'; j++)
		len_owner++;
	
	p->name = malloc(len_name * sizeof(char));
	if (p->name == NULL)
	{
		free(p);
		return (NULL);
	}

	for (k = 0; k < len_name; k++)
		p->name[k] = name[k];

	p->age = age;

	p->owner = malloc(sizeof(char) * len_owner);
	if (p->owner == NULL)
	{
		free(p->name);
		free(p);
		return (NULL);
	}
	for (l = 0; l < len_owner; l++)
		p->owner[l] = owner[i];

	return (p);
}
