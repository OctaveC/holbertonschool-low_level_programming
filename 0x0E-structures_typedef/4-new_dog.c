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
	dog_t *new_dog;

	new_dog = malloc(sizeof(dog_t));
	if (new_dog == NULL)
	{
		return (NULL);
	}
	new_dog->name = _strdup(name);
	if (new_dog->name == NULL)
	{
		free(new_dog);
		return (NULL);
	}
	new_dog->age = age;
	new_dog->owner = _strdup(owner);
	if (new_dog->owner == NULL)
	{
		free(new_dog);
		free(new_dog->name);
		return (NULL);
	}
	return (new_dog);
}

/**
 * _strdup - Returns a pointer to a newly allocated space in memory.
 * @str: String that's going to be copied to the space in memory
 *
 * Return: A pointer to the duplicated string, or NULL
 */
char *_strdup(char *str)
{
	char *array;
	int length = 0, ite;

	if (str == NULL)
	{
		return (NULL);
	}

	while (str[length] != '\0')
	{
		length++;
	}

	array = malloc((length + 1) * sizeof(char));
	if (array == NULL)
		return (NULL);

	for (ite = 0; str[ite] != '\0'; ite++)
	{
		array[ite] = str[ite];
	}
	array[ite] = '\0';
	return (array);
}
