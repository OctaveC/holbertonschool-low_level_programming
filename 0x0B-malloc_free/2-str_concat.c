#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _str_concat - Returns a pointer to s1 followed by s2.
 * @s1: First string
 * @s2: Second string
 *
 * Return: A pointer to the concatenated strings, or NULL
 */
char *str_concat(char *s1, char *s2)
{
	char *array;
	int s1length = 0, s2length = 0, ite;

	if (s1 != NULL)
	{
		while (s1[s1length] != '\0')
			s1length++;
	}

	if (s2 != NULL)
	{
		while (s2[s2length] != '\0')
			s2length++;
	}

	array = malloc((s1length + s2length + 1) * sizeof(char));

	for (ite = 0; ite < s1length; ite++)
	{
		array[ite] = s1[ite];
	}
	for (ite = 0; ite < s2length; ite++)
	{
		array[ite + s1length] = s2[ite];
	}
	array[s1length + s2length] = '\0';
	return (array);
}
