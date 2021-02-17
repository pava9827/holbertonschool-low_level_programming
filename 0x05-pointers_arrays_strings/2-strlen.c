#include "holberton.h"

/**
 * _strlen - funtion  that returns the length of a string.
 * @s: pointer type char.
 * Return: int.
 */
int _strlen(char *s)
{
	int length = 0;

	while (*s != '\0')
	{
		length = length + 1;
		s = s + 1;
	}

	return (length);
}
