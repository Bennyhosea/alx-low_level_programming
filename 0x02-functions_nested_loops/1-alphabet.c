#include "main.h"

/**
 * print_alphabet - Result shold be in lowercase followed byt a new line
 * Return: void
 */

void print_alphabet(void)
{
	char n;

	for (n = 97; n <= 122; n++)
	{
	_putchar(n);
	}
	_putchar('\n');
}
