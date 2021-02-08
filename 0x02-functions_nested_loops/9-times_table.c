#include "holberton.h"

/**
 * times_table - print times table
 *
 *
 * Return: 0
 */
void times_table(void)
{
	int t, p, m;

	for (t = 0; t <= 9; t++)
	{
		for (p = 0; p <= 9; p++)
		{
			m = t * p;
			if ((p == 9) && (m <= 9))
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(m + '0');
				_putchar('\n');
			}
			else if ((p == 9) && (m > 9))
			{
				_putchar(',');
				_putchar(' ');
				_putchar(m / 10 + '0');
				_putchar(m % 10 + '0');
				_putchar('\n');
			}
			else if (p == 0)
			{
				_putchar(p + '0');
			}
			else if (m <= 9)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(m + '0');
			}
			else if (m > 9)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(m / 10 + '0');
				_putchar(m % 10 + '0');
			}
		}
	}
}
