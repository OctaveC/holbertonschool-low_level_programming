#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

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
	return (array);
}
