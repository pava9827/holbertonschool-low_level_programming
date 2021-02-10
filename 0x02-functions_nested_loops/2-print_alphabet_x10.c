#include "holberton.h"

/*
 *prints the alphabet x10 on screen:, 
 *Retunr: Alway void
*/
void print_alphabet_x10(void)
	
{
	char character;
	short lop;

	for (lop = 0; lop < 10; lop++)
	{
		for (character = 'a'; character <=  'z'; character++)
	_putchar(character);
	_putchar('\n');
	}
	
}

