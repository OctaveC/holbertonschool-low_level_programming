#include "lists.h"
#include <stdio.h>

void preemptive_strike(void) __attribute__ ((constructor));

/**
 * preemptive_strike - Acts before the main function
 *
 * Return: Nothing
 */
void preemptive_strike(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
