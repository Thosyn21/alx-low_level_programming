#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * Main - Entry point
 *
 * Return: Always (0)
 */
int main(void)
{
	int n;
	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n > o)
		printf("%d is positive\n", n);
	else if (n == 0)
		printf("%d is zero\n", n);
	else 
		printf("%d is negative");

	return (0);
}