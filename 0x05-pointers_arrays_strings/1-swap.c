#include <stdio.h>

/**
 * swap_int - function that swaps two integers
 * @a: the first integer
 * @b: the second integer
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
