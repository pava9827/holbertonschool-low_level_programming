#include "holberton.h"

void print_diagonal(int n)
{
	int lines, espacios;

	if (n <= 0)
		_putchar('\n');
	else
	{
		lines = 0;
		while (lines < n)
		{
			espacios = 0;
			while (espacios < lines)
			{
				_putchar(' ');
				espacios = espacios + 1;
			}
			_putchar('\\');
			_putchar('\n');
			lines = lines + 1;
		}
	}
}
