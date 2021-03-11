#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_numbers - Prints numbers with a specific separator
 * @separator: String to be printed between numbers
 * @n: Number of integers passed to the function
 *
 * Return: Nothing
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int ite;

	va_start (args, n);

	for (ite = 0; ite < n; ite++)
	{
		printf("%d", va_arg(args, int));
		if (ite < (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	va_end (args);
	printf("\n");
}
