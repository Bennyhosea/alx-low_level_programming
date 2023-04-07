#include "main.h"
#include <stdio.h>

/**
 * main - number of arguments passed into it
 * @argc: argument couunter
 * @argv: argument vector
 *
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	(void) argv;
	printf("%d\n", argc - 1);
	return (0);
}
