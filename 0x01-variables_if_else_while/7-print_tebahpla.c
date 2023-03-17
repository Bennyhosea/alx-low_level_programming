#include <stdio.h>

/**
 * main - Print lowercase alphabets in reverse,
 * followered by a new line.
 * Return: Always 0 (Success)
 */
int main(void)
{
	char bh;

	for (bh = 'z'; bh >= 'a'; bh--)
	{
		putchar(bh);
	}
	putchar('\n');
	return (0);
}
