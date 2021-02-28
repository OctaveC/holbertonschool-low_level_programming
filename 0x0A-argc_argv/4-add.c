#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - Adds two positive numbers.
 * @argc: Numbers of arguments
 * @argv: Array of said arguments
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int result = 0, ite;

	for (ite = 1; ite < argc; ite++)
	{
		if (isdigit(*argv[ite]) == -1)
		{
			printf("Error\n");

			return (1);
		}
		result += atoi(argv[ite]);
	}
	printf("%d\n", result);
	return (0);
}
