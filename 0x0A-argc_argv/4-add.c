#include <stdio.h>
#include <stdlib.h>

/**
 * main - Adds two positive numbers.
 * @argc: Numbers of arguments
 * @argv: Array of said arguments
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int result = 0, ite1, ite2;

	for (ite1 = 1; ite1 < argc; ite1++)
	{
		for (ite2 = 0; argv[ite1][ite2]; ite2++)
		{
			if (argv[ite1][ite2] > '9' || argv[ite1][ite2] < '0')
			{
				printf("Error\n");

				return (1);
			}
		}
		result += atoi(argv[ite1]);
	}
	printf("%d\n", result);
	return (0);
}
