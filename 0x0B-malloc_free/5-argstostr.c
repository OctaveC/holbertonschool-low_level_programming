#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * argstostr - Concatenates all arguments.
 * @ac: Numbers of arguments
 * @av: Pointer to array of arguments
 *
 * Return: A pointer to a new string
 */
char *argstostr(int ac, char **av)
{
	char *arguments;
	unsigned int size = 0, ite1, ite2, ite3 = 0;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	for (ite1 = 0; ite1 < (unsigned int)ac; ite1++)
	{
		size = size + _strlen(av[ite1]);
	}

	arguments = malloc((size + 1) * sizeof(char));
	if (arguments == NULL)
		return (NULL);

	for (ite1 = 0; (ite1 < (unsigned int)ac); ite1++)
	{
		for (ite2 = 0; av[ite1][ite2] != '\0'; ite2++)
		{
			arguments[ite3] = av[ite1][ite2];
			ite3++;
		}
		arguments[ite3++] = '\n';
	}
	arguments[ite3] = '\0';
	return (arguments);
}


/**
 * _strlen - Return the length of a string
 * @s: a pointer
 *
 * Return: The length of a string
 */
int _strlen(char *s)
{
	int n;

	while (s[n] != '\0')
	{
		n++;
	}
	return (n + 1);
}
