#include "dog.h"
/**
 * len - calculates the lenght of s
 * @s: apointer to string
 *
 * Return: the lenght of s
 */
int len(char *s)
{
	if (s[0])
		return (1 + len(&s[1]));
	else
		return (1);
}
/**
 * _strcpy -  function
 * @dest: pointer  to the desticantion
 * @src: pointer  to the source string
 *
 * Description: copies the string pointed to by src, including the
 * terminating null byte (\0), to the buffer pointed to by dest.
 *
 * Return: the pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int counter, l = len(src);

	if (src == NULL || dest == NULL)
		return (NULL);
	for (counter = 0; counter < l; counter++)
	{
		dest[counter] = src[counter];
	}
	return (dest);
}

/**
 * new_dog - crates a new dog
 * @name: apointer to string of name of the dog
 * @owner: apointer to string of name of the owner
 * @age: the age of the dog
 *
 * Return: apointer to a dog_t struct
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *newDog;

	newDog = malloc(sizeof(dog_t));
	if (!newDog)
	{
		return (NULL);
	}

	newDog->name = malloc(len(name));

	if (!_strcpy(newDog->name, name))
	{
		free(newDog);
		return (NULL);
	}

	newDog->owner = malloc(len(owner));


	if (!_strcpy(newDog->owner, owner))
	{
		free(newDog->name);
		free(newDog);
		return (NULL);
	}
	newDog->age = age;

	return (newDog);
}
