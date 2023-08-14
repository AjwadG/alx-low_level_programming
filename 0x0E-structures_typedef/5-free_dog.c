#include "dog.h"
/**
 * free_dog - free the sapce alocated for  dog
 * @d: a pointer to struct dog_t
 */
void free_dog(dog_t *d)
{
	if (d == NULL)
		return;
	free(d->name);
	free(d->owner);
	free(d);
}
