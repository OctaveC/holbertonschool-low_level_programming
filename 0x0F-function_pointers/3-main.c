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

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	x = atoi(argv[1]);
	y = atoi(argv[3]);

	result = get_op_func(argv[2])(x, y);
	printf("%d\n", result);
	return (0);
}
