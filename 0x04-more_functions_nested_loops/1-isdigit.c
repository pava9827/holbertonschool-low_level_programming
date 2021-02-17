#include "holberton.h"
/**
 * _isdigit - checking for digits.
 *@c: Characters to be checked
 *
 * Return: 1 if c is a digit. 0 otherwise.
 */
int _isdigit(int c)
{

	int number = 0;


		if (c >= 48 && c <= 59)
		{
			number = 1;
		}
return (number);
}

