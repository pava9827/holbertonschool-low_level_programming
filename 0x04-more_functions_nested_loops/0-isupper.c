#include "holberton.h"

/**
 *
 * main : check if the character is uppercase.
 *
 * Return : 1 if uppercase, 0 otherwise.
 */
int _isupper(int c)
{
	int character;

	if (c >= 65 &&  c <= 90)
	{
		character = 1;
	}
	else
	{
		character = 0;
	}
	return (character);
}
