#include "holberton.h"
/**
 * reverse_array - reverse the array
 *@a: the int
 *@n: the string
 *Return: return 0
 */
void reverse_array(int *a, int n)
{
	int i, index;

	n = n - 1;
	for (i = 0; i < n; n--, i++)
	{
	index = a[i];
	a[i] = a[n];
	a[n] = index;
	}
}
