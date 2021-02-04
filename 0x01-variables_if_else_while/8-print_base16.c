#include <stdio.h>
/**
 * main - this function will put the characters a through z using the charfunct
 *
 * Return: This returns zero
 */
int main(void)
{
	int e;
	char num = '0';

	for (num = '0' ; num <= '9' ; num++)
	{
		putchar(num);
	}
	for (e = 'a' ; e <= 'f' ; e++)
	{
		putchar(e);
	}
	putchar('\n');
	return (0);
}
