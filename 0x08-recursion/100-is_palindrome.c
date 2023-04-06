#include "main.h"

/**
 * is_palindrome - function ton return 1 is a string is empty
 * @s: string to be checked
 *
 * Return: 1 if the string is a palindrome, 0 if not
 */

int is_palindrome(char *s)
{
	if (s == 0)
		return (1);
	return (check_pal(s, 0, _strlen_recursion(s)));
}

/**
 * _strlen_recursion - returns the length of a string
 * @s: the string to be calculated
 *
 * Return: length of the string
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(s + 1));
}

/**
 * check_pal - check the characters recursively for palindrome
 * @s: string to be checked
 * @i: itereator
 * @len: legth of the integer
 *
 * Return: 1 if palindrome, 0 if not
 */

int check_pal(char *s, int i, int len)
{
	if (*(s + i) != *(s + len - 1))
		return (0);
	if (i >= len)
		return (1);
	return (check_pal(s, i + 1, len - 1));
}
