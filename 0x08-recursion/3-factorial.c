#include "main.h"

/**
 * factorial - function that print the factorial ofn a giving number
 * @n: the giving number
 * Return: giving value
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n <= 1)
		return (1);

	return (n * factorial(n - 1));
}
