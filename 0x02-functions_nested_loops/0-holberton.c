#include "holberton.h"
#include <unistd.h>

/*
*main - the Holberton print.
*az
* Return: returns 0
*/
int main(void)
{
	char name[]  = "Holberton";
	int h;

	for (h = 0; h < 9; h++)
		_putchar(name[h]);
	_putchar('\n');
	return (0);

}
