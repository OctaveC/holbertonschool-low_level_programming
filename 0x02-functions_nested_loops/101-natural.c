#include <stdio.h>

/**
 * main - print the sum of the natural nums under 1024
 *
 *
 * Return: 0
 */
int main(void)
{
	int num, tot = 0;

	for (num = 0; num < 1024; num++)
	{
	if (num % 3 == 0 || num % 5 == 0)
	tot += num;
	}
	printf("%i\n", tot);
}
