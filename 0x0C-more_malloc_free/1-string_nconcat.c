#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * string_nconcat - Concatenates two strings depending on n
 * @s1: First string
 * @s2: Second string
 * @n: How much of the second string we'e going to concatenate
 *
 * Return: NULL if it fails, a pointer to the memory otherwise
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *array;
	unsigned int s1length = 0, s2length = 0, ite, ite2 = 0;

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

	if (n >= s2length)
		n = s2length;

	array = malloc((s1length + n + 1) * sizeof(char));
	if (array == NULL)
		return (NULL);

	for (ite = 0; ite < s1length; ite++)
	{
		array[ite] = s1[ite];
	}
	for (ite = s1length; ite < (s1length + n); ite++)
	{
		array[ite] = s2[ite2];
		ite2++;
	}
	array[ite] = '\0';
	return (array);
}
