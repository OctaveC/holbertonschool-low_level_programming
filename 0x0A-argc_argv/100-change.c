#include <stdio.h>
#include <stdlib.h>

/**
 * main - Prints minimum number of coins to make change for an amount of money.
 * @argc: Numbers of arguments
 * @argv: Array of said arguments
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int result = 0, cents, coin, ite, coins_array[] = {25, 10, 5, 2, 1};

	cents = atoi(argv[1]);
	if (argc != 2)
	{
		printf("Error\n");

		return (1);
	}
	if (cents <= 0)
	{
		printf("0/n");
	}
	else
	{
		for (ite = 0; ite < 5 && cents; ite++)
		{
			coin = cents / coins_array[ite];
			cents = cents - (coin * coins_array[ite]);
			result = result + coin;
		}
		printf("%d\n", result);
	}
	return (0);
}
