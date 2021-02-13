#include "holberton.h"

/**
 * print_numbers - function that prints the numbers, from 0 to 9.
 * @i int.
 * Return: Always 0.
 */

void print_numbers(void)
{
	int i;

	for (i = 0 ; i <= 9 ; i++)
	{
		_putchar(i + '0');
		if (i == 9)
			_putchar('\n');
	}
}
