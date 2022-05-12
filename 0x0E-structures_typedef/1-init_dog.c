#include "dog.h"

/**
  * init_dog - initializes a variable of type struct dog.
  * @d: pointer to struct dog.
  * @name: dog's name.
  * @age: dog's age.
  * @owner: dog's owner.
  */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
