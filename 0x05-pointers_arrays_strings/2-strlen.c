#include <stdio.h>

/**
 * _strlen - function that returns the lenght of a string
 * @str: The string which get the lenght
 * Return: nothing
 */

size_t _strlen(const char *str)
{
	size_t lenght = 0;

	while (*str++)
	lenght++;
	return (lenght);
}
