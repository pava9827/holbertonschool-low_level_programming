#include <stdio.h>
#include "holberton.h"
/**
 * main: swap_int - that takes an integer to update the value it points to.
 * @a: pinter type int.
 * @b: pinter type int.
 * Return: Always  0 (Success).
 */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *b;
	*b = *a;
	*a = temp;
}
