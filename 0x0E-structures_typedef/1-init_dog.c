#include <stdlib.h>
#include "dog.h"

/**
 * int_dog - intialize a variable of type struct dog
 * @d: pointer to struct dog to initailize
 * @name: name to initialize
 * @age: age to intialize
 * @owner: owner to intialize
 */

void int_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));
	d->name = name;
	d->age = age;
	d->owner = owner;
}
