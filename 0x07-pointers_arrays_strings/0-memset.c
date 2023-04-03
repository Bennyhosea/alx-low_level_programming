#include "main.h"

/**
 * _memset - function that fils memory with a constant byte
 * @s: memory are
 * @b: the number of byte
 * @n: number of byte
 *
 * Return: pointer to s memory
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
