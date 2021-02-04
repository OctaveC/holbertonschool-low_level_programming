#include <stdio.h>
/**
 * main - this function will put the characters a through z using the charfunct
 *
 * Return: This returns zero
 */
int main(void)
{
	char e;

	for (e = 'z' ; e >= 'a' ; e--)
	{
		putchar(e);
	}
	putchar('\n');
	return (0);
}
