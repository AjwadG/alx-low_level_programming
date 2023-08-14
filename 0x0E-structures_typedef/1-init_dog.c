#include "dog.h"

/**
 * init_dog - initialize a variable of type dog
 *
 * @d: a pointert to a dog struct
 * @name: apointer to string of name of the dog
 * @owner: apointer to string of name of the owner
 * @age: the age of the dog
 *
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
