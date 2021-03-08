#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - Printd a new dog
 * @name: Name of the new dog
 * @age: Age of the new dog
 * @owner: Owner of the new dog
 *
 * Return: Nothing
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	struct dog *new_dog;

	new_dog = malloc(sizeof(struct dog));
	if (new_dog == NULL)
	return (NULL);

	new_dog->name = name;
	if (new_dog->name == NULL)
	{
		free(new_dog);
		return (NULL);
	}
	new_dog->age = age;
	if (new_dog->age == 0)
	{
		free(new_dog);
		return (NULL);
	}
	new_dog->owner = owner;
	if (new_dog->owner == NULL)
	{
		free(new_dog);
		return (NULL);
	}
	return (new_dog);
}
