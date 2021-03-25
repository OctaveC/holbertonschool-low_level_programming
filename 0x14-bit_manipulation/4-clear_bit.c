#include "holberton.h"

/**
 * clear_bit - Sets the value of a bit to 0 at a given index.
 * @n: A pointer to an unsigned long int
 * @index: The location of the bit we want to change to 0
 *
 * Return: 1 if it worked, or -1 if error
 **/
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int placeholder = 1, reverse_placeholder;

	if (index > sizeof(unsigned int) * sizeof(long))
		return (-1);

	placeholder = placeholder << index;
	/* Our placeholder is equal to 1, by doing (placeholder << index), we */
	/* move the 1 to the left as many times as indicated by the index, */
	/* as if index = 9, our placeholder(which was 0000000001) will become */
	/* 1000000000, which is the exact spot we want to modify according to */
	/* our index */

	reverse_placeholder = ~placeholder;
	/* Here, the  bit operation '~' turns all of our 0 into 1 and 1 into 0*/
	/* Therefore, considering our previous exemple,our reverse_placeholder*/
	/* is equal to 0111111111*/

	*n = *n & reverse_placeholder;
	/* As our placeholder indicates the correct spot, we just have to use */
	/* the bit operation '&' that will turn the corresponding byte to 0 */
	/* if it's currently a 0, but also to 0 if it's currently a 1, */
	/* however, because '&' cannot turn 0 to 1, as the bytes *must* */
	/* correspond for it to work, the rest of the number in binary */
	/* will not change */

	return (1);
}
