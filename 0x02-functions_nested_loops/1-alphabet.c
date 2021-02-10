#include "holberton.h"

/*
 *prints the alphabet, in lowercase, followed by a new line
*az
 *Retunr: Alway void
*/
void print_alphabet(void)
{
	char character = 'a';

	for (character = 'a'; character <= 'z'; character++)
	_putchar(character);
	_putchar('\n');

}

