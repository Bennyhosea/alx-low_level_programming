#include "function_pointers.h"
#include <stdio.h>

/**
 * print_name - print a name using pointer function
 * @name: string to locate
 * @f: pointer to function
 *
 * Return: void
 */

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;

	f(name);
}
