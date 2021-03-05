#include <stdio.h>
#include <stdlib.h>

/**
 * main - Multiplies two numbers.
 * @argc: Numbers of arguments
 * @argv: Array of said arguments
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	unsigned long int result, x, y;
	int ite;

	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}
	else
	{
		for (ite = 0; argv[1][ite] != '\0'; ite++)
		{
			if (argv[1][ite] > 57 || argv[1][ite] < 48)
			{
				printf("Error\n");
				exit(98);
			}
		}
		x = atol(argv[1]);
		for (ite = 0; argv[2][ite] != '\0'; ite++)
		{
			if (argv[2][ite] > 57 || argv[2][ite] < 48)
			{
				printf("Error\n");
				exit(98);
			}
		}
		y = atol(argv[2]);
		result = x * y;
		printf("%li\n", result);

		return (0);
	}
}
