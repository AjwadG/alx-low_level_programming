#ifndef HEADER_FILE
#define HEADER_FILE

/**
 * struct dog - a struct for dog info
 * @name: name of the dog as string
 * @age: age of the dog as float for some reasone
 * @owner: name of the owner of the dog
 *
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};


void init_dog(struct dog *d, char *name, float age, char *owner);

#endif
