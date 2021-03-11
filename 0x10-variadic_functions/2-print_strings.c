#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_strings - Prints strings with a specific separator
 * @separator: String to be printed between strings
 * @n: Number of strings passed to the function
 *
 * Return: Nothing
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	char *string;
	unsigned int ite;

	va_start(args, n);

	for (ite = 0; ite < n; ite++)
	{
		string = va_arg(args, char *);
		if (string == NULL)
			string = "(nil)";

		printf("%s", string);
		if (ite < (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	va_end(args);
	printf("\n");
}
