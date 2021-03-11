#include <stdarg.h>
#include <stdio.h>
#include <stddef.h>
#include "variadic_functions.h"

/**
 * print_all - Prints any type of argument, depending of the const format
 * @format: Either c for char, i for integer, f for float or s for char *
 *
 * Return: Nothing
 */
void print_all(const char * const format, ...)
{
	print_t array[] = {
		{"c", print_char},
		{"i", print_int},
		{"f", print_float},
		{"s", print_string},
		{NULL, NULL}
	};
	va_list args;
	char *separator = "";
	unsigned int ite1 = 0, ite2 = 0;

	va_start(args, format);
	while (format != NULL && format[ite1] != '\0')
	{
		ite2 = 0;
		while (array[ite2].p != NULL)
		{
			if (format[ite1] == *array[ite2].p)
			{
				printf("%s", separator);
				array[ite2].func(args);
				separator = ", ";
				break;
			}
			ite2++;
		}
		ite1++;
	}
	va_end(args);
	printf("\n");
}

/**
 * print_char - Prints a char.
 * @args: The arguments passed to the function
 *
 * Return: Nothing
 */
void print_char(va_list args)
{
	printf("%c", va_arg(args, int));
}

/**
 * print_int - Prints an int.
 * @args: The arguments passed to the function
 *
 * Return: Nothing
 */
void print_int(va_list args)
{
	printf("%d", va_arg(args, int));
}

/**
 * print_float - Prints a float.
 * @args: The arguments passed to the function
 *
 * Return: Nothing
 */
void print_float(va_list args)
{
	printf("%f", va_arg(args, double));
}

/**
 * print_string - Prints a string.
 * @args: The arguments passed to the function
 *
 * Return: Nothing
 */
void print_string(va_list args)
{
	char *string = va_arg(args, char *);

	if (string == NULL)
		string = "(nil)";
	printf("%s", string);
}
