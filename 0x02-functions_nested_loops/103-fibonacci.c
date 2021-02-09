#include <stdio.h>

/**
 * main - print the sum of the even-valued terms of the fibonacci sequence
 *
 * Return: 0
 */
int main(void)
{
	long int i, n = 33, t1 = 0, t2 = 1, nextTerm, tot;

	for (i = 1; i < n; ++i)
	{
		tot += t1;
		nextTerm = t1 + t2;
		t1 = t2;
		t2 = nextTerm;
	}
	printf("%li\n", tot);
}
