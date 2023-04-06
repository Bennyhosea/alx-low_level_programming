#include "main.h"

/**
 * is_prime_number - function that print prime num if integer is 1
 * @n: input number
 * Return: 1 if n is a prime number, 0 otherwise
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (actual_prime(n, n - 1));
}

/**
 * actual_prime - calculate if a number is prime recursively
 * @n: input number
 * @i: iterator
 * Return: 1 if n is prime number, otherwise 0
 */

int actual_prime(int n, int i)
{
	if (i == 1)
		return (1);
	if (n % i == 0 && i > 0)
		return (0);
	return (actual_prime(n, i - 1));
}
