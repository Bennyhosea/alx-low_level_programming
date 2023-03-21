#include "main.h"

/**
 * main - Printing of alphabet 10 times
 *
 * Return: void
 */

void print_alphabet_x10(void)

{
	char n;
	int m = 0;

	while (m <= 9)
	{
	for (n = 97; n <= 122; n++)
	{
	_putchar(n);
	}
	_putchar('\n');
	m++;
	}
}
