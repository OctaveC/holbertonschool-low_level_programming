#include <stdio.h>
/**
 * main - this function will put the numbers 0 through 9 followed by comas
 *
 * Return: This returns zero
 */
int main(void)
{
	int num = '0';

	for (num = '0' ; num <= '9' ; num++)
	{
		putchar(num);
		if (num != '9')
		{
		putchar(',');
		putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
