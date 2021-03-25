#include "holberton.h"

/**
 * flip_bits - Returns the number of bits you would need to flip to get
 * from one number to another.
 * @n: An unsigned long int
 * @m: Another unsigned long int, we want to turn our first into this one
 *
 * Return: The number of bits that need to be flipped
 **/
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int placeholder;
	int count = 0;

	placeholder = n ^ m;
	/* The bit operation '^' highlight the difference between two numbers */
	/* by turning all bites that are identical between the two to 0, and */
	/* all bites that are different to 1, such that 110010 and 101110 */
	/* turn into 011100 */

	while (placeholder > 0)
	{
		if ((placeholder & 1) == 1)
			count++;
		placeholder = placeholder >> 1;
	}

	return (count);
}
