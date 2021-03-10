#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * main - Calls our functions
 * @argc: Numbers of arguments
 * @argv: Array of said arguments
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int result, x, y;
	int (*test)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	x = atoi(argv[1]);
	y = atoi(argv[3]);
	test = get_op_func(argv[2]);
	if (test == NULL)
	{
	printf("Error\n");
	exit(99);
	}
	result = test(x, y);
	printf("%d\n", result);
	return (0);
}
