#include <stdio.h>
/**
 * main - this function will put the numbers 0 through 9
 *
 * Return: This returns zero
 */
int main(void)
{
	int e = 0;

	for (e = '0' ; e <= '9' ; e++)
	{
		putchar(e);
	}
	putchar('\n');
	return (0);
}
