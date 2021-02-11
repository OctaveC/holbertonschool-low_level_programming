#include <stdio.h>

/**
 * main - prints the largest prime factor of an integer
 *
 * Return: 0
 */
int main(void)
{
	long int count, largest = 0, num = 612852475143;

	for (count = 2; num > 1; count++)
	{
		while (num % count == 0)
		{
			largest = count;
			num = num / count;
		}
	}
	printf("%li\n", largest);
	return (0);
}
