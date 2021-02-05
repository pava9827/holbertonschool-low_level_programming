#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - gets random number, and gets last digit of it
 *
 *
 * Return: returns 0
 */
int main(void)
{
	int n;
	int o;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	o = n % 10;
	printf("Last digit of %i is %i ", n, o);
	if (o > 5)
		printf("and is greater than 5\n");
	else if (o == 0)
		printf(" and is 0\n");
	els
		printf("and is less than 6 and not 0\n");

	return (0);
}
