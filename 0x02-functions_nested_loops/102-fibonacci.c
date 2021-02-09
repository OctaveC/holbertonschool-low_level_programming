#include <stdio.h>

/**
 * main - print the first 50 nums of the fibonacci sequence
 *
 *
 * Return: 0
 */
void main(void)
{
	long int i, n = 50, t1 = 1, t2 = 2, nextTerm;

	for (i = 1; i <= n; ++i)
	{
		if (i == 1)
		{
		printf("%li", t1);
		}
		else
		{
		printf(", %li", t1);
		}
		nextTerm = t1 + t2;
		t1 = t2;
		t2 = nextTerm;
	}
	putchar('\n');
}
