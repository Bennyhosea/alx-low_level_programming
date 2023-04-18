#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

int _strlen(char *str);
char *_strcopy(char *dest, char *src);
dog_t *new_dog(char *name, float age, char *owner);

/**
 * _strlen - find the lenght of a string
 * @str: The string to be measured
 *
 * Return: The lenght of a string
 */

int _strlen(char *str)
{
	int len = 0;

	while (*str++)
		len++;

	return (len);
}

/**
 * _strcopy - copy a string pointer to src
 * @dest: the buffer storing the string
 * @src: the source string
 *
 * Return: the pointer to dest
 */

char *_strcopy(char *dest, char *src)
{
	int index = 0;

	for (index = 0; src[index]; index++)
		dest[index] = src[index];

	dest[index] = '\0';

	return (dest);
}

/**
 * new_dog - function that creates a new dog
 * @name: first member
 * @age: second member
 * @owner: third member
 *
 * Return: NULL if function fails
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dd;

	if (name == NULL || age < 0 || owner == NULL)
		return (NULL);

	dd = malloc(sizeof(dog_t));
	if (dd == NULL)
		return (NULL);

	dd->name = malloc(sizeof(char) * (_strlen(name) + 1));
	if (dd->name == NULL)
	{
		free(dd);
		return (NULL);
	}

	dd->owner = malloc(sizeof(char) * (_strlen(owner) + 1));
	if (dd->name == NULL)
	{
		free(dd->name);
		free(dd);
		return (NULL);
	}


	dd->name = _strcopy(dd->name, name);
	dd->age = age;
	dd->owner = _strcopy(dd->owner, owner);

	return (dd);
}
