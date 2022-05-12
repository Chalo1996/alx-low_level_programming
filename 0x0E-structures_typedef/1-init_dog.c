#include "dog.h"

/**
  * init_dog - initializes a variable of type struct dog.
  * @d: pointer to struct dog.
  * @name: dog's name.
  * @age: dog's age.
  * @owner: dog's owner.
  *
  * Return: struct not found.
  */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (!d)
		return;
	d->name = name;
	d->age = age;
	d->owner = owner;
}
