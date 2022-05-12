#ifndef _DOG_H
#define _DOG_H

#include "my_dog.h"
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#include "dog_t.h"
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif /* _DOG_H */
