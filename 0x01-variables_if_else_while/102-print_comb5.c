#include<stdio.h>
/**
 * main - Absolute Nonsense
 *
 * Return: This returns zero
 */
int main(void)
{
	int num1;
	int num2;

	for (num1 = 0 ; num1 <= 99 ; num1++)
	{
		for (num2 = 0 ; num2 <= 99 ; num2++)
		{
			if (num2 > num1)
			{
			putchar(num1 / 10 + '0');
			putchar(num1 % 10 + '0');
			putchar(32);
			putchar(num2 / 10 + '0');
			putchar(num2 % 10 + '0');

			if (num1 != 98)
			{
				putchar(',');
				putchar(' ');
			}
			}
		}
	}
	putchar('\n');
	return (0);
}
