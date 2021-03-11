#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * sum_them_all - Sums all the paramaters
 * @n: Count of the parameters
 *
 * Return: Sum
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	unsigned int ite;
	int sum = 0;

	if (n == 0)
		return (0);

	va_start (args, n);         /* Initialize the argument list. */

	for (ite = 0; ite < n; ite++)
		sum += va_arg (args, int);    /* Get the next argument value. */

	va_end (args);                  /* Clean up. */
	return sum;
}
