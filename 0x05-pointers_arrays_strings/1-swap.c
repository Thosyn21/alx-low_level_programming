#include "main.h"

/**
* swap_int - swaps the value of two integers
* @a: An input integer
* @b: An input integer
* Return: 0
*/

void swap_int(int *a, int *b)
{
	int m;

	m = *a;
	*a = *b;
	*b = m;

}
