#include <stdio.h>
#include <stdlib.h>

/**
 * main - Multiplies two numbers.
 * @argc: Numbers of arguments
 * @argv: Array of said arguments
 *
 * Return: 0
 */
int main (int argc, char *argv[])
{
	int result, x, y;

	if (argc != 3)
	{
		printf("Error\n");

		return (1);
	}
	else
	{
		x = atoi(argv[1]);
		y = atoi(argv[2]);
		result = x * y;
		printf("%d\n", result);

		return (0);
	}
}
