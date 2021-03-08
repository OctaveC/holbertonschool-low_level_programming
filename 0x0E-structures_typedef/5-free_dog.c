#include <stdio.h>
#include "dog.h"

/**
 * free_dog - Libère les clébards
 * @d: Points to a struct dog
 *
 * Return: Nothing
 */
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
	free(d);
	free(d->name);
	free(d->age);
	free(d->owner);
	}
}
