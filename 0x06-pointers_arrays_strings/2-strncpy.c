#include "main.h"

/**
 * _strncpy - function that copies a string
 * @dest: The first string
 * @src: the second string
 * @n: Number of string
 * Return: value
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	i = 0;
	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}

	return (dest);
}
