#include<stdio.h>
/**
 * main - print numbers 0 through 99
 *
 * Return: This returns zero
 */
int main(void)
{
	int num1;
	int num2;

	for (num1 = '0' ; num1 <= '9' ; num1++)
		for (num2 = '0' ; num2 <= '9' ; num2++)
	{
		putchar(num1);
		putchar(num2);
		if ((num1 != '9') || (num2 != '9'))
		{
		putchar(',');
		putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
