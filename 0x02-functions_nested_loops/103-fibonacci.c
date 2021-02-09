#include <stdio.h>

/**
 * main - print the sum of the even-valued terms of the fibonacci sequence
 *
 * Return: 0
 */
int main(void)
{
	int i, t1 = 1, t2 = 2, nextTerm, tot;

	for (i = 0; i < 33; ++i)
	{
		if (t1 % 2 == 0)
		{
		tot += t1;
		}
		nextTerm = t1 + t2;
		t1 = t2;
		t2 = nextTerm;
	}
	printf("%i\n", tot);
	return (0);
}
