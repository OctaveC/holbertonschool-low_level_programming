#include "holberton.h"

/**
 * set_bit - Sets the value of a bit to 1 at a given index.
 * @n: A pointer to an unsigned long int
 * @index: The location of the bit we want to change to 1
 *
 * Return: 1 if it worked, or -1 if error
 **/
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int placeholder = 1;

	if (index > sizeof(unsigned int) * sizeof(long))
		return (-1);

	placeholder = placeholder << index;
	/* Our placeholder is equal to 1, by doing (placeholder << index), we */
	/* move the 1 to the left as many times as indicated by the index, */
	/* as if index = 9, our placeholder(which was 0000000001) will become */
	/* 1000000000, which is the exact spot we want to modify according to */
	/* our index */

	*n = *n | placeholder;
	/* As our placeholder indicates the correct spot, we just have to use */
	/* the bit operation '|' that will turn the corresponding byte to 1 */
	/* if it's currently a 0, but also to 1 if it's currently a 1 */

	return (1);
}
