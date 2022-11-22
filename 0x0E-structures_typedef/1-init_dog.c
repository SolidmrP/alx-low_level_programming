#include <stdio.h>
#include "dog.h"

/**
 * init_dog - initializes a varisble of type struct dog
 * @d: dogs details
 * @name: dogs name
 * @age: dogs age
 * @owner: dogs owner
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
