#include "holberton.h"

/**
 * print_times_table - print times table for n
 * @n: an int
 *
 * Return: 0
 */

void print_times_table(int n)
{
	int t, p, m;

	if ((n == 0) || (n >= 15))
		return;
	for (t = 0; t <= n; t++)
	{
		for (p = 0; p <= n; p++)
		{
			m = t * p;
			if (p == 0)
			{
				_putchar(p + '0');
			}
			else if (m <= 9)
			{
				_putchar(' ');
				_putchar(' ');
				_putchar(' ');
				_putchar(m + '0');
			}
			else if (m <= 99)
			{
				_putchar(' ');
				_putchar(' ');
				_putchar(m / 10 + '0');
				_putchar(m % 10 + '0');
			}
			else
			{
				_putchar(' ');
				_putchar(m / 100 + '0');
				_putchar((m % 100) / 10 + '0');
				_putchar(m % 10 + '0');
			}
			if (p < n)
				_putchar(',');
		}
		_putchar('\n');
	}
}
