#include <stdio.h>

/**
 * main - print the first 98 nums of the fibonacci sequence
 *
 *
 * Return: 0
 */
int main(void)
{
	unsigned long int i, t1 = 1, t2 = 2, nextTerm;

	unsigned long int t1a, t1b, t2a, t2b, nextTerma, nextTermb;

	for (i = 1; i <= 89; ++i)
	{
		if (i == 1)
		{
			printf("%lu", t1);
		}
		else
		{
		printf(", %lu", t1);
		}

		nextTerm = t1 + t2;
		t1 = t2;
		t2 = nextTerm;
	}
	t1a = t1 / 1000000000;
	t1b = t1 % 1000000000;
	t2a = t2 / 1000000000;
	t2b = t2 % 1000000000;
	nextTerma = nextTerm / 1000000000;
	nextTermb = nextTerm % 1000000000;
	for (i = 90; i <= 98; ++i)
	{
		printf(", %lu%lu", t1a, t1b);
		nextTerma = t1a + t2a + ((t1b + t2b) / 1000000000);
		nextTermb = (t1b + t2b) % 1000000000;
/*              ^ equivalent of "nextTerm = t1 + t20" */
		t1a = t2a;
		t1b = t2b;
/*              ^ equivalent of "t1 = t2" */
		t2a = nextTerma;
		t2b = nextTermb;
/*              ^ equivalent of "t2 = nextTerm" */
	}
	putchar('\n');
	return (0);
}
