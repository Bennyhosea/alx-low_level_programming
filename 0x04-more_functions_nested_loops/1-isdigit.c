#include "main.h"

/**
 * _isdigit - cheack for a digit number 0 through 9
 * @c: The character to be checked
 * Return: 1 if its digit or 0 for anything else
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
	return (1);
	}
	return (0);
}
