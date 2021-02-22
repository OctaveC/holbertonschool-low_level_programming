#include "holberton.h"

/**
 * print_chessboard - Print a chessbord of specified dimensions.
 * @a: the vertical size of the chessboard
 *
 * Return: Nothing.
 */
void print_chessboard(char (*a)[8])
{
	int ite1, ite2;

	for (ite1 = 0; ite1 < 8; ite1++)
	{
		for (ite2 = 0; ite2 < 8; ite2++)
		{
			_putchar(a[ite1][ite2]);
			if (ite2 == 7)
			{
				_putchar('\n');
			}
		}
	}
}
