#include "main.h"
#include <stdlib.h>

/**
 * create_array - function that create an array of character
 * and initialize it with a sprcific character
 * @size: the size of an array
 * @c: the character to fill in the array
 * Return: The array  filled
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *s;

	if (size == 0)
		return (NULL);

	s = malloc(size * sizeof(char));

	if (s == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
	{
		s[i] = c;
	}

	return (s);
}
