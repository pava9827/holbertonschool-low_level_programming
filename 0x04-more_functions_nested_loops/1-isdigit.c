#include "holberton.h"

/**
* Main : printf that looks for a digit from 0 to 9.
*
* Return : 1 if digit, 0 if not.
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

