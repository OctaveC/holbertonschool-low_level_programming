#include <stdio.h>
/**
 * main - this function will put the characters a through z using the charfunct
 *
 * Return: This returns zero
 */
int main(void)
{
	char num = '0';

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
