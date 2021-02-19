
#include "holberton.h"
#include <stdio.h>
/**
 * _strcmp - compares two strings
 *@s1: the string
 *@s2: the second string
 *Return: return 0
 */
int _strcmp(char *s1, char *s2)
{
	int leng;
	for (leng = 0; s1[leng] || s2[leng]; leng++)
	{
	if (s1[leng] < s2[leng])
	return (s1[leng] - s2[leng]);
	else if (s1[leng] > s2[leng])
	return (s1[leng] - s2[leng]);
	}
	return (0);
}
