#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "3-calc.h"

/**
 * get_op_func - Selects the correct function to perform the operation.
 * @s: Either "+", "-", "*", "/" or "%", it's what determines the operation
 *
 * Return: Index of first element for which cmp function doesn't return 0
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i = 0;

	while (ops[i].op != NULL)
	{
		if (strlen(s) == 1)
		{
			if (*s == *ops[i].op)
			{
				return (ops[i].f);
			}
		}
		i++;
	}
	printf("Error\n");
	exit(99);
}
