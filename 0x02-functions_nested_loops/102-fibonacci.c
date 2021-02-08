#include <stdio.h>

/**
 * main - print the first 50 nums of the fibonacci sequence
 *
 *
 * Return: 0
 */
void main(void)
{
	long int i, n = 50, t1 = 0, t2 = 1, nextTerm;

	for (i = 1; i <= n; ++i)
	{
		printf("%li, ", t1);
		nextTerm = t1 + t2;
		t1 = t2;
		t2 = nextTerm;
	}
	putchar('\n');
}
