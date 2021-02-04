 #include <stdio.h>
/**
 * main - this time, if e = e or q, it will incrment e instead of putchar
 *
 * Return: This returns zero
 */
int main(void)
{
	char e;

	for (e = 'a' ; e <= 'z' ; e++)
	{
		if (e == 'e' || e == 'q')
		{
			e++;
		}
		putchar(e);
	}
	putchar('\n');
	return (0);
}
