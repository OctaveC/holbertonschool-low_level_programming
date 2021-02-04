#include <stdio.h>
/**
 * main - this function will put the characters a through z and A through Z
 *
 * Return: This returns zero
 */
int main(void)
{
	char e;

	for (e = 'a' ; e <= 'z' ; e++)
	{
		putchar(e);
	}
	for (e = 'A' ; e <= 'Z' ; e++)
	{
		putchar(e);
	}
	putchar('\n')
	return (0);
}
