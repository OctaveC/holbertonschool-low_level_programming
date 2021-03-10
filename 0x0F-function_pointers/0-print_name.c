#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name - Print a name using function pointers.
 * @name: The address of the name we're going to print
 * @f: Pointer to a function that will print the name
 *
 * Return: Nothing
 */
void print_name(char *name, void (*f)(char *))
{
	if (f == NULL && name == NULL)
		return;
	f(name);
}
