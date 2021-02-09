#include "holberton.h"

/**
 * print_alphabet_x10 - print the alphabet ten times
 *
 * Return: 0.
 */
void print_alphabet_x10(void)
{
	int let;
	int num = 1;

	while (num <= 10)
	{
		let = 'a';
		while (let <= 'z')
		{
			_putchar(let);
			let++;
		}
		_putchar('\n');
		num++;
	}
}
