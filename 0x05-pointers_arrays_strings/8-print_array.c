#include "main.h"
#include <stdio.h>

/**
 * print_array - function that print n elements of an array of integers
 * followed by a new line
 * @a: The first integer
 * @n: Number of arrays integer
 * Return: void
 */

void print_array(int *a, int n)
{
	int j;

	for (j = 0; j < n; j++)
	{
	printf("%d", a[j]);
	if (j != (n - 1))
	{
	printf(", ");
	}
	}
	printf("\n");
}

