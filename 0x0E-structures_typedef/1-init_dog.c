#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - to initializes a variable of type struct dog
 * @d: a pointer to struct dog to initalize
 * @name: name to be intialize
 * @age: age to be intialize
 * @owner: owner to be initalize
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));
	d->name = name;
	d->age = age;
	d->owner = owner;
}
