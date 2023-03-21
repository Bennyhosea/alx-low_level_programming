#include "main.h"
/**
 * main - Print alphabet in lowercase followed by a new line,
 * _putchar can only be used twice.
 *
 * Return: Always 0 (Suceess)
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
