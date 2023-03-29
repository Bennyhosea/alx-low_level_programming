#include "main.h"

/**
 * reverse_array - function that reverses the content of an array of integers
 * @a: The array to be checked
 * @n: The number of elements of the array
 *
 * Return: void
 */

void reverse_array(int *a, int n)
{

	int i;
	int j;

	for (i = 0; i < n--; i++)
	{
		j = a[i];
		a[i] = a[n];
		a[n] = j;
	}
}
