#include "holberton.h"
#include <stdio.h>

/**
 * print_diagsums - Print the sum of 2 diagonals.
 * @a: the numbers of lines
 * @size: the number of element per line
 *
 * Return: Nothing.
 */
void print_diagsums(int *a, int size)
{
	int ite, diago1 = 0, diago2 = 0;

	for (ite = 0; ite < size; ite++)
	{
		diago1 = diago1 + a[ite];
/* ^adds the numbers in the diagonal together, the ite variable increasing */
/*  each loop allows for the correct spot on the current line to be selected */
		a = a + size;
/* ^increase our pointer by size, size being a number representing the */
/* lentgh of the line, this allows us to jump to the next line */
/* (if you have a case where each line is five bytes long, increasing */
/* your pointer by five will jump to the next line) */
	}
	a = a - size;
/* ^This is simply to undo the previous 'a = a + size', leaving us at the */
/* start of the last line in our square matrix */
	for (ite = 0; ite < size; ite++)
	{
		diago2 = diago2 + a[ite];
		a = a - size;
/* ^same as previously, but this time we're going in reverse order because */
/* we're taking care of the other diagonal */
	}
	printf("%d, %d\n", diago1, diago2);
}
